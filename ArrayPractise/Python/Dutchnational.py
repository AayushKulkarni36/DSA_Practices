# You are given an integer array arr containing only 0s, 1s, and 2s.
# Your task is to sort the array in-place so that all 0s come first, followed by all 1s, and then all 2s.

# You must solve this in linear time (O(n)) and without using any extra space (O(1)).

def DutchSort(arr):
    low=0
    mid=0
    high=len(arr)-1
    while(mid<=high):
        if(arr[mid]==0):
            arr[low],arr[mid]=arr[mid],arr[low]
            low+=1
            mid+=1
        elif(arr[mid]==1):
            mid+=1
        elif(arr[mid]==2):
            arr[high],arr[mid]=arr[mid],arr[high]
            high-=1
    return arr
arr=[2,1,1,0,0,1,1,2,2,0]
print(DutchSort(arr))
