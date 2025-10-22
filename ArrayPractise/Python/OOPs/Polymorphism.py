'''Polymorphism : It is the ability of a entity (function,method,object) to perform diferently in different scenarios based on the type of the object
*Compile time Polymorphism: means decidinf which method / operation to run during compile time usually through method overloading 
Languages like Java or C++ support this. But Python doesnt because its dynamically typed it resolves method calls at runtime, not during compilation. So, true method overloading isnt supported in Python, though similar behavior can be achieved using default or variable arguments.




'''

class Calculator:
    def add(self,*args):   #compile time Polymorphism
        return sum(args)
calc = Calculator()
print(calc.add(5,10))
print(calc.add(5,10,3))
print(calc.add(5,10,5,7))
print(calc.add(5,10,9,1,2))



'''2. Run-Time Polymorphism (Method Overriding)

Definition:
When a child class redefines a method from the parent class, and the method to execute is determined at runtime based on the object type'''


class Animal:
    def sound(self):
        print("Some Sound")
class Dog(Animal):
    def sound(self):
        print("Wooh")
class Cat(Animal):
    def sound(self):
        print("Meow")

a = Dog()
b = Cat()
a.sound()
b.sound()
