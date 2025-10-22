def twosum(arr,target):
    pos={}
    res=[]

    for i,nums in enumerate(arr):
        rem =target -nums
        if rem in pos:
            res.append(arr[i])
            res.append(rem)
        pos[nums]=i

    return res

arr = [1,2,3,4,5,6,7,8,9]
print(twosum(arr,10))
