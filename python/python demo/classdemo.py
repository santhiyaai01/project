class grandparents:
    def __init__(self,grandpaname,grandmaname,famname):
        self.grandfathername= grandpaname
        self.grandmothername=grandmaname
        self.familyname=famname
     
    def welcome(self):
         print(self.grandfathername,self.grandmothername,self.familyname)

x=grandparents("kalaigar","Dhalyu ammal","dmk")
x.welcome()
         
class grandparents:
    def __init__(self,grandpaname,grandmaname,famname):
       self.grandfathername= grandpaname
       self.grandmothername=grandmaname
       self.familyname=famname

    def welcome(self):
      print("Welcome to ",self.familyname," wishes from ",self.grandfathername,"and ",self.grandmothername)

x=grandparents("kalaingar","Dhayalu ammal","DMK")


       



class mkazhagiri(grandparents):
    def __init__(self, grandpaname, grandmaname,famname, fname,mname):
        self.fathername= fname
        self.mothername=mname
        super().__init__(grandpaname, grandmaname, famname)
       
    def thanks(self):
        print("Hi..! Granpa ", self.grandfathername ,"and Grandma ", self.grandmothername , " We ", self.fathername, "and ", self.mothername, " thank you for warm welcome to our " , self.familyname, "family")

x=mkazhagiri("kalaigar","Dhalyu ammal","mk azhagiri","Kanthi Alagiri","DMK")

x.welcome()
x.thanks()










    
