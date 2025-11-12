import tkinter as tk
from tkinter import scrolledtext, filedialog, messagebox
import socket
import threading
import os

HOST = '0.0.0.0'
PORT = 8080

clients = []

# --- GUI Setup ---
root = tk.Tk()
root.title("TCP Chat Server GUI")

chat_box = scrolledtext.ScrolledText(root, width=60, height=20, wrap=tk.WORD)
chat_box.pack(padx=10, pady=10)
chat_box.config(state=tk.DISABLED)

entry = tk.Entry(root, width=50)
entry.pack(side=tk.LEFT, padx=10, pady=10)

def broadcast(msg):
    for client in clients:
        try:
            client.send(msg.encode())
        except:
            clients.remove(client)

def send_message():
    msg = entry.get()
    if msg:
        chat_box.config(state=tk.NORMAL)
        chat_box.insert(tk.END, f"You: {msg}\n")
        chat_box.config(state=tk.DISABLED)
        broadcast(f"Server: {msg}")
        entry.delete(0, tk.END)

def send_file():
    filepath = filedialog.askopenfilename()
    if not filepath:
        return
    filesize = os.path.getsize(filepath)
    filename = os.path.basename(filepath)
    for client in clients:
        try:
            # Send file header
            client.send(f"FILE {filesize} {filename}".encode())
            # Send file data
            with open(filepath, "rb") as f:
                while True:
                    data = f.read(1024)
                    if not data:
                        break
                    client.sendall(data)
        except:
            clients.remove(client)
    chat_box.config(state=tk.NORMAL)
    chat_box.insert(tk.END, f"File sent: {filename}\n")
    chat_box.config(state=tk.DISABLED)

send_button = tk.Button(root, text="Send", command=send_message)
send_button.pack(side=tk.LEFT, padx=5, pady=10)

file_button = tk.Button(root, text="Send File", command=send_file)
file_button.pack(side=tk.RIGHT, padx=5, pady=10)

# --- Networking ---
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind((HOST, PORT))
server_socket.listen(5)

def handle_client(client_socket, addr):
    while True:
        try:
            data = client_socket.recv(1024)
            if not data:
                break
            text = data.decode(errors='ignore')
            if text.startswith("FILE "):
                # Receive file
                parts = text.split()
                filesize = int(parts[1])
                filename = parts[2]
                with open(filename, "wb") as f:
                    received = 0
                    while received < filesize:
                        chunk = client_socket.recv(min(1024, filesize - received))
                        if not chunk:
                            break
                        f.write(chunk)
                        received += len(chunk)
                chat_box.config(state=tk.NORMAL)
                chat_box.insert(tk.END, f"Received file from {addr}: {filename}\n")
                chat_box.config(state=tk.DISABLED)
            else:
                chat_box.config(state=tk.NORMAL)
                chat_box.insert(tk.END, f"{addr}: {text}\n")
                chat_box.config(state=tk.DISABLED)
                broadcast(f"{addr}: {text}")
        except:
            break
    client_socket.close()
    clients.remove(client_socket)

def accept_clients():
    while True:
        client_socket, addr = server_socket.accept()
        clients.append(client_socket)
        chat_box.config(state=tk.NORMAL)
        chat_box.insert(tk.END, f"Client connected: {addr}\n")
        chat_box.config(state=tk.DISABLED)
        threading.Thread(target=handle_client, args=(client_socket, addr), daemon=True).start()

threading.Thread(target=accept_clients, daemon=True).start()
root.mainloop()

