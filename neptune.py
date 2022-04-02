import tkinter as tk
import os

def clear():
    os.system("ls")
    os.system("bash clean.sh")

def compile_game():
    os.system("bash compile.sh")

def run_yabause():
    os.system("bash run_with_yabause.sh")

root = tk.Tk()
root.title('Neptune Engine')
frame = tk.Frame(root)
frame.pack()

btn_quit = tk.Button(frame, 
                   text="Quit", 
                   fg="red",
                   command=quit)
btn_quit.pack(side=tk.LEFT)

btn_clear = tk.Button(frame,
                   text="Clear",
                   command=clear)
btn_clear.pack(side=tk.LEFT)

btn_compile = tk.Button(frame,
                   text="Compile",
                   command=compile_game)
btn_compile.pack(side=tk.LEFT)

btn_run_yabause = tk.Button(frame,
                   text="Run Yabause",
                   command=run_yabause)
btn_run_yabause.pack(side=tk.LEFT)

root.mainloop()