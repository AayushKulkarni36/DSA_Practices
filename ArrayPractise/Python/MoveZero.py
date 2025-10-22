# def moveZeroes(arr):
#     n=len(arr)
#     temp=[]
#     for i in range(n):
#         if (arr[i] !=0):
#             temp.append(arr[i])
#     nz =len(temp)

#     for i in range(nz):
#         arr[i]=temp[i]
#     for i in range(nz,n):
#         arr[i]=0

#     return arr
# arr=[1,0,3,4,0,5,1,1,0]
# print(moveZeroes(arr))



def moveZeroes(arr):
    n=len(arr)
    for i in range(n):
        if(arr[i]==0):
            j=i
            break
    for i in range(j+1,n):
        if(arr[i]!=0):
            arr[i],arr[j]=arr[j],arr[i]
            j+=1
    return arr
arr=[1,0,3,4,0,5,1,1,0]
print(moveZeroes(arr))


