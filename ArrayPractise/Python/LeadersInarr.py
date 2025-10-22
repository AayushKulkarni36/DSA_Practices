def Leaders(arr):
    n=len(arr)
    ans=[]
    for i in range(n):
        Leader = True
        for j in range(i+1,n):
            if arr[j] > arr[i]:
                Leader=False
                break
        if Leader: 
            ans.append(arr[i])
    return ans
arr = list(map(int ,input("Enter elements of array: ").split()))
print(Leaders(arr))



def lead(array):
    maxi=-1234567890
    res=[]
    n=len(array)
    for i in range(n-1,-1,-1):
        if(array[i]>maxi):
            maxi=array[i]
            res.append(array[i])
    return res
array=[5,4,3,2,1]
print(lead(array))

 