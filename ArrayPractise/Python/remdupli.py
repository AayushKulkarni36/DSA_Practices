def remdupli(arr):
    i=0
    arr.sort()
    for j in range(len(arr)):
        if(arr[i]!=arr[j]):
            i+=1
            arr[i]=arr[j]
    return arr[0:i+1]
arr=[5,4,3,1,33,1]
print(remdupli(arr))


def remDuplicate(arr):
    
    unique=set()
    for i in range(len(arr)):
        unique.add(arr[i])
    return unique
arr=[1,6,1,1,5,2,6,7]
print(remDuplicate(arr))