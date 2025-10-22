def fibb_sum(n):
    a=0
    b=1
    cnt=0

    for i in range(0,n):
        c=a+b
        cnt+=a
        print(a," ")
        a=b
        b=c
    return cnt

n =int(input("Enter N: "))
count = fibb_sum(n)
print (f"Sum of first {n} fibbonacci nums:{count} ")