class Animal:
    def __init__(self,name,color,desiese):
        self.name=name
        self.color=color
        self.desiese=desiese
    def info(self):
        print("Name: ",self.name)
class Dog(Animal):
    def __init__(self, name,color,desiese,Breed,Age,):
        super().__init__(name,color,desiese)
        self.Breed=Breed
        self.Age=Age    
    def show(self):
        print("Name: ",self.name)
        print("Breed:",self.Breed)
        print("Age:",self.Age)
        print("color:",self.color)
        print("Diesease:",self.desiese)
Dog1 =Dog('Bubly','white','None','pug',3)
Dog1.show()
Dog1.info()