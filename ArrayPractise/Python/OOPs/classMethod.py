class Emp:
    company='Apple'
    def show(self,name):
        self.name=name
        print(f"The name is {self.name} and the company is {self.company}")
    @classmethod
    def change_company(cls,new_company):
        cls.company=new_company
p1 =Emp()
p1.show("Ayush")
p1.change_company('Tesla')
p1.show("Ayush")
print(Emp.company)



class Employee:
    def __init__(self,name,salary):
        self.name=name
        self.salary=salary
    @classmethod
    def from_string(cls,Emp_str):
        Name,Salary = Emp_str.split('-')
        return cls(Name,int(Salary))
e2=Employee.from_string('aaaaayush-233113')
print(e2.name,e2.salary)


        