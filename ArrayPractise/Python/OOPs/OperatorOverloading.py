class Point:
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def __add__(self,other):
        return Point(self.x+other.x,self.y+other.y)
    def __str__(self):
        return f"{self.x} , {self.y}"
    
        

p1 = Point(3,4)
p2 = Point(5,2)
p3 =p1+p2
print(p3)
        


'''“Can you implement a class that supports addition of two complex numbers using operator overloading?'''

class Complex:
    def __init__(self,real,imag):
        self.real=real
        self.imag=imag
    def __add__(self,other):
        return Complex(self.real+other.real,self.imag+other.imag)
    def __str__(self):
        return f"{self.real} + {self.imag}i"
    
c1=Complex(2,4)
c2=Complex(4,1)
c3=c1+c2
print(c3)
        

class time:
    def __init__(self,hour,min):
        self.hour=hour
        self.min=min
    def __add__(self,other):
        return time(self.hour+other.hour,self.min+other.min)
    def __gt__(self,other):
        return time(self.hour>other.hour,self.min>other.min)
    def __str__(self):
        return time(self.hour,self.min)
t1 = time(2,30)
t2=time(4,40)
t3=t1+t2
print(t3)
        