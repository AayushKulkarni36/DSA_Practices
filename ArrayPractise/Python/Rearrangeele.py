def Rearrange(arr):
    n=len(arr)
    pos=[]
    neg=[]
    for i in range(n):
        if(arr[i]>0):
            pos.append(arr[i])
        elif(arr[i]<0):
            neg.append(arr[i])

    for i in range((n//2)-1):
        arr[2*i]=pos[i]
        arr[2*i+1]=neg[i]
    return arr
arr=[-1,2,3,-7,55,-3,0,-4]
print(Rearrange(arr))