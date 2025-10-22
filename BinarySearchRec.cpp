#include<bits/stdc++.h>
using namespace std;


int BinarySearch(vector<int> arr,int low,int high,int target)
{  
    
    int mid =(low+high)/2;
    if(low>high) return -1;

    if(arr[mid]==target) return mid;
    else if (arr[mid]>target)
        return BinarySearch(arr,low,mid-1,target);
    else 
        return BinarySearch(arr,mid+1,high,target);
}
 int main()
 {
    vector<int>arr={1,2,3,4,5,6,7,8};
    
    
    int low=0;
    int high = arr.size();
    
   
   int num = BinarySearch(arr,low,high,85);
   if (num==-1)cout<<"not found!";
   else
   cout<<"Found at index: "<<num;
 }