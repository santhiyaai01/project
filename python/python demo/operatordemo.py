from tkinter import *

demo=Tk()

demo.title("Arithmatic Operations")
demo.geometry("500x500+500+100")
demo.config(bg="light blue")
demo.state("zoomed")

def addition():
    a=int(tbinputa.get())
    b=int(tbinputb.get())
    #print(a+b)
    c=a+b
    labelouptut.config(text=c)

def Subtraction():
    a=int(tbinputa.get())
    b=int(tbinputb.get())
    #print(a+b)
    c=a-b
    labelouptut.config(text=c)

def Multiplication():
    a=int(tbinputa.get())
    b=int(tbinputb.get())
    c=a*b
    labelouptut.config(text=c)

def division():
    a=int(tbinputa.get())
    b=int(tbinputb.get())
    c=a/b
    labelouptut.config(text=c)

def modulas():
    a=int(tbinputa.get())
    b=int(tbinputb.get())
    c=a%b
    labelouptut.config(text=c)

def Exponentiation():
    a=int(tbinputa.get())
    b=int(tbinputb.get())
    c=a**b
    labelouptut.config(text=c)   
      
def Floordivision():
    a=int(tbinputa.get())
    b=int(tbinputb.get())
    c=a//b
    labelouptut.config(text=c)  



labelTitle=Label(demo,text="Arithmatic Operations")
labelTitle.grid(row=0,column=10,padx=150, pady=30)

labelonemsg=Label(demo,text="Enter value a :")
labelonemsg.grid(row=1,column=8)

tbinputa=Entry(demo,width=30)
tbinputa.grid(row=1,column=10)


labeltwomsg=Label(demo,text="Enter value b :")
labeltwomsg.grid(row=2,column=8, pady=20)

tbinputb=Entry(demo,width=30)
tbinputb.grid(row=2,column=10,pady=20)


labelouptut=Label(demo,text="")
labelouptut.grid(row=3,column=30, pady=20)


btnAdd=Button(demo,text="Addition", command=addition)
btnAdd.grid(row=4, column=1,pady=20)

btnSubtract=Button(demo,text="Subtraction",command=Subtraction)
btnSubtract.grid(row=4,column=3,pady=20,padx=20)


btnmulti=Button(demo,text="Multiplication",command=Multiplication)
btnmulti.grid(row=4,column=5,pady=20,padx=20)


btnmulti=Button(demo,text="division",command=division)
btnmulti.grid(row=4,column=7,pady=20,padx=20)


btnmulti=Button(demo,text="modulas",command=modulas)
btnmulti.grid(row=4,column=8,pady=20,padx=20)


btnmulti=Button(demo,text="Exponentiation",command=Exponentiation)
btnmulti.grid(row=4,column=9,pady=20,padx=20)


btnmulti=Button(demo,text="floordivision",command= Floordivision)
btnmulti.grid(row=4,column=10,pady=20,padx=20)


demo.mainloop()