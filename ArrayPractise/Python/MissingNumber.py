def missingnumber(arr):
    n=len(arr)
    seen =set(arr)
    for i in range(1,n+1):
        if i not in seen:
            return i
    return -1
    
arr=[2,3,4,5,1,1,6]
ans=missingnumber(arr)
print(ans)
