import socket
import tkinter as tk
import keyboard


IP_ADDRESS = "192.168.1.177"
PORT = 80

client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect((IP_ADDRESS, PORT))

def send_signal(signal):
    client_socket.send(signal)


def handle_keyboard_input(e):
    key = e.keysym
    if key == "w":
        send_signal(b'1')
        print("Signal for 'w' sent")
        w_label.config(bg="red")
    elif key == "a":
        send_signal(b'2')
        print("Signal for 'a' sent")
        a_label.config(bg="red")
    elif key == "s":
        send_signal(b'3')
        print("Signal for 's' sent")
        s_label.config(bg="red")
    elif key == "d":
        send_signal(b'4')
        print("Signal for 'd' sent")
        d_label.config(bg="red")

def handle_keyboard_release(e):
    key = e.keysym
    if key == "w":
        w_label.config(bg="white")
    elif key == "a":
        a_label.config(bg="white")
    elif key == "s":
        s_label.config(bg="white")
    elif key == "d":
        d_label.config(bg="white")

root = tk.Tk()
root.title("Arduino Signal Sender")
root.geometry("594x594")

# img = tk.PhotoImage(file= "mine.png")
# bg_label = tk.Label(root, image=img)
# bg_label.grid(row=0, column=0, rowspan=10, columnspan=10)





w_label = tk.Label(root, text="W", font=("Arial", 15), bg="light yellow", height=2, width=4)
w_label.place(relx=0.5, rely=0.4, anchor="center")

a_label = tk.Label(root, text="A", font=("Arial", 15), bg="light yellow", height=2, width=4)
a_label.place(relx=0.4, rely=0.5, anchor="center")

s_label = tk.Label(root, text="S", font=("Arial", 15), bg="light yellow", height=2, width=4)
s_label.place(relx=0.5, rely=0.5, anchor="center")

d_label = tk.Label(root, text="D", font=("Arial", 15), bg="light yellow", height=2, width=4)
d_label.place(relx=0.6, rely=0.5, anchor="center")







root.bind("<KeyPress>", handle_keyboard_input)
root.bind("<KeyRelease>", handle_keyboard_release)

root.mainloop()
