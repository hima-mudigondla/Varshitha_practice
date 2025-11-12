import tkinter as tk
from tkinter import scrolledtext, filedialog
import socket
import threading

HOST = '192.168.68.145'  # server IP
PORT = 8080

client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect((HOST, PORT))

# --- GUI Setup ---
root = tk.Tk()
root.title("TCP Chat Client GUI")

chat_box = scrolledtext.ScrolledText(root, width=60, height=20, wrap=tk.WORD)
chat_box.pack(padx=10, pady=10)
chat_box.config(state=tk.DISABLED)

entry = tk.Entry(root, width=50)
entry.pack(side=tk.LEFT, padx=10, pady=10)

def send_message():
    msg = entry.get()
    if msg:
        client_socket.send(msg.encode())
        chat_box.config(state=tk.NORMAL)
        chat_box.insert(tk.END, f"You: {msg}\n")
        chat_box.config(state=tk.DISABLED)
        entry.delete(0, tk.END)

send_button = tk.Button(root, text="Send", command=send_message)
send_button.pack(side=tk.RIGHT, padx=10, pady=10)

# --- Receive messages ---
def receive_messages():
    while True:
        try:
            data = client_socket.recv(1024)
            if not data:
                break
            msg = data.decode(errors='ignore')
            chat_box.config(state=tk.NORMAL)
            chat_box.insert(tk.END, f"{msg}\n")
            chat_box.config(state=tk.DISABLED)
        except:
            break

threading.Thread(target=receive_messages, daemon=True).start()
root.mainloop()

