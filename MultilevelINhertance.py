class person:
    def __init__(self,name):
        self.name=name
class man(person):
    def showAge(self,age):
        self.age=age
        print(self.name, "is ",self.age,"years old")
class coder(man):
    def showSkills(self,skills):
        print(self.name , " knows " , skills)

p1 = coder("Aayush")
p1.showAge(20)
p1.showSkills("python") 

    
        
        