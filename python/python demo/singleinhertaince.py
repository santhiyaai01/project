class teacher():
    def __init__(self):
        print("School name is CSI:")
    def welcome(self):
        print("Welcome to our school")
    def attandance(self):
        print("I have full attandance")

class students(teacher):
    def __init__(self):
        super().__init__()
        super().welcome()
        super().attandance()
        print("Students class is 3rd standared")

s=students() 
