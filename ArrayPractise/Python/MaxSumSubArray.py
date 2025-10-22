'''def maxSumSubArr(arr):
    n =len(arr)
    maxSum=-2345789
    for i in range(n):
        sum=0
        for j in range(i,n):
            sum+=arr[j]
            maxSum=max(maxSum,sum)
    return maxSum
            
arr=[-2,-3,4,-1,-2,1,5,-3]
print(maxSumSubArr(arr))'''


# Kadanes algorithm
def maxSumSubArr(arr):
    n =len(arr)
    maxSum=-2345789
    sum=0
    for i in range(n):
        if (sum==0):
            start=i
        sum+=arr[i]
        if(maxSum<sum):
            maxSum=sum
            ansStart=start
            ansEnd=i
        if(sum<=0):
            sum=0
    for i in range(ansStart,ansEnd+1):
        print(arr[i],end=' ')
    return maxSum
arr=[-2,-3,4,-1,-2,1,5,-3]
print(f"\n{maxSumSubArr(arr)}")