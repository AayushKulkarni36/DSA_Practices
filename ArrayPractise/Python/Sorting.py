def selectionSort(arr):
    n=len(arr)
    for i in range(n):
        for j in range(i,n):
            if(arr[i]>arr[j]):
                arr[i],arr[j]=arr[j],arr[i]
    return arr
arr = [2,1,4,5,7,3,4]
print(selectionSort(arr))


def bubbleSort(arr):
    n=len(arr)
    for i in range(n):
        for j in range(n):
            if(arr[j]<arr[j-1]):
                arr[i],arr[j]=arr[j],arr[i]
    return arr
arr = [6,4,1,8,9,3,5,0]
print(selectionSort(arr))




def insertionSort(arr):
    n=len(arr)
    for i in range(n):
        j=i
        while(j>=0 and arr[j-1]>arr[j]):
            arr[j],arr[j-1]=arr[j-1],arr[j]
    return arr
arr = [1,8,2,0,3,1,6,7,13]
print(selectionSort(arr))





def mergeSortedArr(arr,low,mid,high):
    left=low
    right=mid+1
    temp=[]
    while(left<=mid and right<=high):
        if(arr[left]<=arr[right]):
            temp.append(arr[left])
            left+=1
        else:
            temp.append(arr[right])
            right+=1
    while(left<=mid):
        temp.append(arr[left])
        left+=1
    while(right<=high):
        temp.append(arr[right])
        right+=1
    
    for i in range(len(temp)):
        arr[low+i]=temp[i]
    return arr




def mergeSort(arr,low,high):
    if(low>=high):return
    mid =(low+high)//2
    mergeSort(arr,low,mid)
    mergeSort(arr,mid+1,high)
    mergeSortedArr(arr,low,mid,high)
    return arr
arr = [1,8,2,0,3,1,6,7,13]
n=len(arr)
low=0
high=n-1
print(mergeSort(arr,low,high))


