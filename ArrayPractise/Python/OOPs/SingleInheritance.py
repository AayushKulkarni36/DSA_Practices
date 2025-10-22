class Animal:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    
class Dog(Animal):
    def info(self):
        print("Name :",self.name)
        print("Age :",self.age)

Dog1 = Dog('lucy',4)
Dog1.info()
   
        