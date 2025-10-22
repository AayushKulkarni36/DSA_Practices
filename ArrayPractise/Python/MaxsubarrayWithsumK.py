def MaxSubarraySumk(arr,k):
    Maxlen=0
    Prefixsum=0
    PrefixSumMap={}
    n =len(arr)
    for i in range(n):
        Prefixsum+=arr[i]

        if(Prefixsum==k):
            Maxlen=max(Maxlen,i+1)
        rem=Prefixsum-k

        if rem in PrefixSumMap:
            lenn = i-PrefixSumMap[rem]
            Maxlen = max(lenn,Maxlen)
        if Prefixsum not in PrefixSumMap :
            PrefixSumMap[Prefixsum]=i
    return Maxlen
arr=[1, 3, 3, -6, -1, 1, 1, 4, 2, 3]
print(MaxSubarraySumk(arr,0))



