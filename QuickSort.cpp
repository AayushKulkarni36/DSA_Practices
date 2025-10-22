#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int low,int high)
{
    int i=low;
    int j=high;
    int pivot=arr[low];

    while(i<j)
    {
        while(arr[i]<=arr[low] && i<=high-1)
        i++;
        while(arr[j]>arr[low]&& j>=low+1)
        j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;

}
void qs(vector<int>&arr,int low,int high)
{
    if(low<high)
    {
    int pivotedArr = partition(arr,low,high);
    qs(arr,low,pivotedArr-1);
    qs(arr,pivotedArr+1,high);
    }
}
int main()
{
    vector<int> arr={6,5,4,2,8,1,9,3,9,2,8};
    qs(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
}