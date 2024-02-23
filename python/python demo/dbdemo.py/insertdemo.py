from tkinter import *
import mysql.connector

win=Tk()

win.title("Insert into MYSQL DB Demo")
win.geometry("500x500")


class frameDBconnect:
    def __init__(self):
        frametop=Frame(win, bg="black",width=800, height=300, padx=10,pady=10)
        frametop.pack(side=TOP)
        btninsert=Button(frametop,text="INSERT",command=self.frameLeft)
        btninsert.grid(row=0,padx=10,pady=10)
        btninsert=Button(frametop,text="UPDATE",command=self.rightFrame)
        btninsert.grid(row=1,padx=10,pady=10)
        btninsert=Button(frametop,text="DELETE")
        btninsert.grid(row=2,padx=10,pady=10)
    def frameLeft(self):

        frameleft=Frame(win, bg="black",width=500, height=500,padx=30,pady=30)
        frameleft.pack(side= LEFT)

       
        lbl_Title_of_Operation=Label(frameleft, text="Insert into MySQL DB Demo")
        lbl_Title_of_Operation.grid(row=1,columnspan=5)

        lblName=Label(frameleft,text="Name")
        lblName.grid(row=2,column=1,padx=30,pady=10)
        lblTamil=Label(frameleft,text="Tamil")
        lblTamil.grid(row=3,column=1,padx=30,pady=10)


    def rightFrame(self):
           
        
        neww=Tk()
        neww.title("update into MySQL DB Demo")
        neww.geometry("500x500")   
        frameright=Frame(neww, bg="red",width=500, height=500, padx=30,pady=30)
        frameright.pack(side = RIGHT)


        

        lbl_Title_of_Operation1=Label(frameright, text="update into MySQL DB Demo")
        lbl_Title_of_Operation1.grid(row=0,columnspan=5)

        lblName1=Label(frameright,text="Name")
        lblName1.grid(row=2,column=1,padx=30,pady=10)
        lblTamil1=Label(frameright,text="Tamil")
        lblTamil1.grid(row=3,column=1,padx=30,pady=10)

        neww.mainloop()

    def framebottom(self):
           
        
        newwt=Tk()
        newwt.title("delete into MySQL DB Demo")
        newwt.geometry("500x500")   
        framebottom=Frame(newwt, bg="blue",width=500, height=500, padx=30,pady=30)
        framebottom.pack(side = TOP)


        

        lbl_Title_of_Operation1=Label(framebottom, text="delete into MySQL DB Demo")
        lbl_Title_of_Operation1.grid(row=0,columnspan=5)

        lblName1=Label(framebottom,text="Name")
        lblName1.grid(row=2,column=1,padx=30,pady=10)
        lblTamil1=Label(framebottom,text="Tamil")
        lblTamil1.grid(row=3,column=1,padx=30,pady=10)

        newwt.mainloop()
cl=frameDBconnect()
win.mainloop()
      