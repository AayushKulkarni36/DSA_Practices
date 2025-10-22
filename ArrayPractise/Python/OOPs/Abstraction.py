'''Abstraction is nothing but hiding of implemetntation deatils such that the user can easily use complex system with getting into complexities
it is is imp in oop beacuse it provides:
Sensitive or unnecessary details are not exposed, reducing chances of misuse or accidental changes.
Users can focus on what the object does instead of how it does it.
Internal changes dont affect external code, making it easier to update or modify code components'''

from abc import ABC, abstractmethod
class Payment(ABC):        #abstract class
    @abstractmethod       #interface
    def pay(self,amount):      
        pass
     #abstract method : No implementation..concrete class must implement all absstract methods
class CreditCard(Payment):         #  Concrete class (implements ab method)
    def pay(self,amount):
        print(f"paid {amount} $ using Credit Card")

class UPI(Payment):
    def pay(self,amount):
        print(f"paid {amount}  $ using UPI")



# MAIN system which doesnt need to know about payment details ..it can work with both creditc ard and upi

def make_payment(payment_method,amount):
    payment_method.pay(amount)      

cc=CreditCard()
upi=UPI()
make_payment(cc,500)
make_payment(upi,200)  






