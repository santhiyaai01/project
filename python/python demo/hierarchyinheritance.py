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


class shop(chocolate):
    def __init__(self):
        print("hai!...")
        super().__init__()
        super().dairymilk()
        super().fivestar()
        super().milkybar()
        super().snickers()
        super().munch()
        super().perk()
        print("Welcome to our shop")
    def melody(self):
        print("fully chocolate")
    def coffebit(self):
        print("fully choco taste")

class chocoshop(chocolate):
    def __init__(self):
        print("hai!...")
        super().__init__()
        super().dairymilk()
        super().fivestar()
        super().milkybar()
        super().snickers()
        super().munch()
        super().perk()
        print("Welcome to our shop")
    def eclairs():
        print("milky taste")
    def coconutchoco():
        print("coconut taste")

    
s=shop()