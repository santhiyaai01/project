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

class child(chocolate):
    def __init__(self):
        print("hai!...")
        super().__init__()
        super().dairymilk()
        super().fivestar()
        super().milkybar()
        super().snickers()
        super().munch()
        super().perk()
        
    def shop(self):
        print("i am going to shop")

class visit(child):
    pass



v= visit()