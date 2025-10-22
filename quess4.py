def count_substring(arr):
    n=len(arr)
    count=0
    for i in range(n):
        for j in range(i,n):
            if(arr[i]==arr[j]):
                count+=1
    return count

arr =input("Enter a string")
count_substring(arr)
