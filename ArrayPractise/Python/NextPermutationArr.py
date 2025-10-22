def NextPermuatation(arr):
    n=len(arr)
    index=-1
    for i in range(n-2,-1,-1):
        if arr[i]<arr[i+1]:
            index=i
            break
    if index == -1:
        arr.reverse()
        return arr
    for i in range(n-1,index,-1):
        if arr[i]>index:
            arr[i],arr[index]=arr[index],arr[i]
            arr[index::-1]
    return arr
arr = list(map(int,input("Enter elements: ").split()))
ans=NextPermuatation(arr)
print(f"Next Permuation : {ans}")
