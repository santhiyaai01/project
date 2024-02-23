from tkinter import*
import mysql.connector

dm=Tk()

dm.title("MARK LIST")
dm.geometry("500x500+500+100")
dm.config(bg="light green")
dm.state("zoomed")

def mydbconnection():
   con=mysql.connector.connect(

    host="192.168.1.240",
    user="AIBATCH01",
    password="AI@123",
    database="ai_santhiya"
)  
   #print("connected to database throug outside of def at  ",con) 
   return con         



def clickinst():
    a=(tbinputa.get())
    b=(tbinputb.get())
    c=(tbinputc.get())
    d=(tbinputd.get())
    e=(tbinpute.get())
    f=(tbinputf.get())
    g=(tbinputg.get())

    

   

    cl=mydbconnection()
    result=cl.cursor()

    
    sql="INSERT INTO stdlist (Name,Tamil,English,Maths,physics,chemistry,computerscience) VALUES(%s,%s,%s,%s,%s,%s,%s)"
    val=(a,b,c,d,e,f,g)
    result.execute(sql, val)
    cl.commit()

    print(result.rowcount, "row inserted")


def clickupdate():

    a=(tbinputa.get())  
    c=(tbinputc.get())
  

    
    cl=mydbconnection()
    result=cl.cursor()

    
    sql="UPDATE stdlist set English=(%s) where name=(%s)"
    
    val=(c,a)
    result.execute(sql, val)
    cl.commit()

    print(result.rowcount, "row update")
    
def clickdelete():
    
    
    a=(tbinputa.get())

    
    cl=mydbconnection()
    result=cl.cursor()

    
    sql="Delete from stdlist where name=(%s)"
    
    val=(a,)
    result.execute(sql, val)
    cl.commit()

    print(result.rowcount, "row Delete")


labelTitle=Label(dm,text="MARK LIST")
labelTitle.grid(row=0,column=10,padx=150, pady=30)

labelonemsg=Label(dm,text="NAME")
labelonemsg.grid(row=1,column=8,padx=20,pady=20)

tbinputa=Entry(dm,width=30)
tbinputa.grid(row=1,column=10)


labelonemsg=Label(dm,text="TAMIL")
labelonemsg.grid(row=2,column=8,padx=20,pady=20)

tbinputb=Entry(dm,width=30)
tbinputb.grid(row=2,column=10)


labelonemsg=Label(dm,text="ENGLISH")
labelonemsg.grid(row=3,column=8,padx=20,pady=20)

tbinputc=Entry(dm,width=30)
tbinputc.grid(row=3,column=10)

labelonemsg=Label(dm,text="MATHS")
labelonemsg.grid(row=4,column=8,padx=20,pady=20)

tbinputd=Entry(dm,width=30)
tbinputd.grid(row=4,column=10)

labelonemsg=Label(dm,text="PHYSICS")
labelonemsg.grid(row=5,column=8,padx=20,pady=20)

tbinpute=Entry(dm,width=30)
tbinpute.grid(row=5,column=10)

labelonemsg=Label(dm,text="CHEMISTRY")
labelonemsg.grid(row=6,column=8,padx=20,pady=20)

tbinputf=Entry(dm,width=30)
tbinputf.grid(row=6,column=10)

labelonemsg=Label(dm,text="COMPUTER SCIENCE")
labelonemsg.grid(row=7,column=8,padx=20,pady=20)

tbinputg=Entry(dm,width=30)
tbinputg.grid(row=7,column=10)

labelouptut=Label(dm,text="")
labelouptut.grid(row=8,column=1, pady=20)


btninst=Button(dm,text="Insert", command=clickinst)
btninst.grid(row=1, column=5,pady=30,padx=10)

btninst=Button(dm,text="Update", command=clickupdate)
btninst.grid(row=2, column=5,pady=30,padx=10)

btninst=Button(dm,text="Delete", command=clickdelete)
btninst.grid(row=3, column=5,pady=30,padx=10)





dm.mainloop()