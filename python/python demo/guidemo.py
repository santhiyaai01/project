from tkinter import*

app=Tk()
app.title("my first program in GUI app")
app.geometry("500x500+500+100")
app.config(bg="light blue")

def clickresult():
    a=10
    b=5
    c=a+b
    lbltitle.config(text=c,fg="red")



lbltitle=Label(app,text="Arithematic Operation")
lbltitle.grid(row=0, column=1, padx=40,pady=40)

inputbox1=Entry(app,width=30)
inputbox1.grid(row=0,column=2)



lbltitle1=Label(app,text="Arithematic Operation")
lbltitle1.grid(row=1, column=1,padx=40,pady=40)

inputbox2=Entry(app,width=30)
inputbox2.grid(row=1, column=2)


clickme=Button(app,text="addition", command=clickresult,)
clickme.grid(row=2, column=8,padx=40,pady=40)



app.mainloop()