class Dog:
    species ='Labrodor'            #class var
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def show(self):
        print(f"Name of Dog: {self.name}")
        print(f"Age of Dog: {self.age}")
        print(f"Species Dog: {self.species}")

d1 = Dog('helina',2)    #instance var
d2 = Dog('felina',4)    #instance var
d1.species ='Pug'       # Overidding class var 
d1.show()
d2.show()
print(Dog.species)