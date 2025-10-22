def remdupli(arr):
    i=0
    n=len(arr)
    for j in range(1,n):
        if(arr[i]!=arr[j]):
            i+=1
            arr[i]=arr[j]
    return arr[:i+1]

arr=[1,2,2,3,4,5]
print(remdupli(arr))