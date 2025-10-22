class Person:
    def __init__(self,name,age,sex):
        self.name=name
        self.age=age
        self.sex=sex
class Coder:
    def __init__(self,skills,goal):
        self.skills=skills
        self.goal=goal

class Emp(Person,Coder):
    def __init__(self, name, age, sex, skills, goal):
        Person.__init__(self,name, age, sex)
        Coder.__init__(self,skills, goal)
    def info(self,Salary):
        print("Name:",self.name)
        print("Age:",self.age)
        print("Sex:",self.sex)
        print("Skills:",self.skills)
        print("Goal:",self.goal)
        self.Salary=Salary
        print("Salary:",self.Salary)
E1 = Emp('Ayush',20,'Male','AIML','AIML_Engineer')
E1.info(60000000)

        
        