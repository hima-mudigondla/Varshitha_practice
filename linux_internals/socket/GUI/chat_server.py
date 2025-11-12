import tkinter as tk
from tkinter import scrolledtext, filedialog
import socket
import threading

HOST = '0.0.0.0'  # listen on all interfaces
PORT =  8080     # same port for client to connect

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

send_button = tk.Button(root, text="Send", command=send_message)
send_button.pack(side=tk.RIGHT, padx=10, pady=10)

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
            msg = data.decode(errors='ignore')
            chat_box.config(state=tk.NORMAL)
            chat_box.insert(tk.END, f"{addr}: {msg}\n")
            chat_box.config(state=tk.DISABLED)
            broadcast(f"{addr}: {msg}")
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

