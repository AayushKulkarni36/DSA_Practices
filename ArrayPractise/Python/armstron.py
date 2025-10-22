import math
def ArmStrongNo(n):
    temp=n
    sum=0
    
    digit=1 if n==0 else  int(math.log10(n)+1)
    while(n!=0):
        last =n%10
        n = n//10
        sum+=last**digit
        # power =1
        # for i in range(int(digit)):
        #     power*=last
        # sum+=power
    return sum==temp
print(ArmStrongNo(1634))

