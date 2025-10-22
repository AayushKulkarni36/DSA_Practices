class Animal:
    def __init__(self,name):
        self.name=name
    def sound(self):
        return "some animal sound"
    def sleep(self):
        return f"{self.name} is sleeping"
class Dog:
    def sound(self):
        return "Woof woof"
    def sleep(self):
        return "dog is sleeping"

class Cat:
    @property
    def sound(self):
        return "Meow"
    @property
    def sleep(self):
        return "cat is sleeping"    
    @staticmethod
    def hello():
        print("kasakay!!")
a1 = Dog()
a2=Cat()
print(a1.sound())
print(a2.sleep)
Cat.hello()
        