class chocolate():
    def __init__(self):
        print("Famous chocolates")
    def dairymilk(self):
        print("dairymilk is choco taste")
    def fivestar(self):
        print("fivestar is oreo flavour")
    def milkybar(self):
        print("milkybar is milk taste") 
    def snickers(self):
        print("snickers is nuts flavour")
    def kitkat(self):
        print("kitkat is choco taste")
    def munch(self):
        print("Munch is chocolate taste")
    def perk(self):
        print("perk is choco vefer taste")

class home():
    def __init__(self):
        print("Welcome to our home")
    def brother(self):
        print("i have one brother")
    def sister(self):
        print("I have one sister")


class child(chocolate,home):
    def __init__(self):
        print("hai!...")
        super().__init__()
        super().dairymilk()
        super().fivestar()
        super().milkybar()
        super().snickers()
        super().munch()
        super().perk()
        super().brother()
        super().sister()   


s=child()  

               
        