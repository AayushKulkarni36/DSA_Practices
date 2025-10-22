
#     n =len(arr)
#     largest =arr[0]
#     SLarget = -1
#     for i in range(n):
#         if (arr[i]>largest):
#             SLarget=largest
#             largest=arr[i]
#         elif(arr[i]<largest and arr[i]>SLarget):
#             SLarget=arr[i]
#     return SLarget

def Secondlargest(arr):

    s1=set(arr)
    n=len(s1)
    if n <2:
        raise ValueError("Array is too small")
    return sorted(s1)[n-2]
arr=[5,3,1,8,6,45,33]
print(Secondlargest(arr))

