
def FirstandLast(arr, x):
    first = -1
    last = -1
    n = len(arr)
    for i in range(0,n):
        if (arr[i] == x):
        
            if (first == -1):
                first = i
            last = i
    return first,last



arr = [10, 2, 3, 3, 3, 5, 3, 5, 6, 3]
ans = FirstandLast(arr, 3)
print(f"First:{ans[0]},\nLast:{ans[1]}")

