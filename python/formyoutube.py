
from tkinter import *
from tkinter import ttk
window = Tk()
window.title("Bowen university COCCS student python form Created By Olansebe Saumuel Ayomide")
window.geometry('400x400')
window.configure(background = "green");
a = Label(window ,text = "Firstname").grid(row = 0,column = 0)
b = Label(window ,text = "Surname").grid(row = 1,column = 0)
c = Label(window ,text = "Matric Number").grid(row = 2,column = 0)
d = Label(window ,text = "Programme").grid(row = 3,column = 0)
a1 = Entry(window).grid(row = 0,column = 1)
b1 = Entry(window).grid(row = 1,column = 1)
c1 = Entry(window).grid(row = 2,column = 1)
d1 = Entry(window).grid(row = 3,column = 1)
def clicked():
   res = "Welcome to COCCS" + txt.get()
   lbl.configure(text= res)
btn = ttk.Button(window ,text="Submit").grid(row=4,column=0)
window.mainloop()