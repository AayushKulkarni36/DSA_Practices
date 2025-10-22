class Person:
    def __init__(self,name,age):
        self.__name=name
        self.__age=age
    @property
    def get_name(self):
        return self.__name
    @property
    def get_age(self):
        return self.__age
    
    def set_name(self,newName):
            self.__name=newName
       
    def set_age(self,newAge):
        if(newAge>0):
            self.__age=newAge

a = Person('Ayush',20)
    
print(a.get_name,a.get_age)
a.set_name("Aayush Kulkarni")
a.set_age(23)
print(a.get_name,a.get_age)
print(a.name)