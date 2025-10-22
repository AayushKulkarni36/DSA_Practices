def findDulpiAndMiss(arr):
    n =len(arr)
    li=[]
    sum = int((n*(n+1))/2)
    sum2=0
    for i in range(0,n):
        if(i>0 and arr[i]==arr[i-1]):
            li.append(arr[i]) #duplicate
            continue
        sum2+=arr[i]
        
    li.append(sum-sum2) #missing

    return li

arr =list(map(int,input("Enter Elements of srray such that one element is missing and one element is Duplicate: ").split()))
arr.sort()
ans =findDulpiAndMiss(arr)
print(ans)

