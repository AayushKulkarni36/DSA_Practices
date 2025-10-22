class Dog:
    species ='Labro'
    def __init__(self,name,age):  #self refers to the current instance of the class
        self.name=name 
        self.age=age

D1 = Dog('Lucy',5)
print(D1.name,D1.age,D1.species)
        
# Self parameter is a reference to the current instance of the class. It allows us to access the attributes and methods of the object.