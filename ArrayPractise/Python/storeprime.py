def storePrime(n):
    
    res=[]
    for i in range (2,n):
        cnt=0
        for j in range(2,i):
            if(i%j==0):
                cnt+=1
                break
        if cnt==0:
            res.append(i)
    return res
print(storePrime(10))