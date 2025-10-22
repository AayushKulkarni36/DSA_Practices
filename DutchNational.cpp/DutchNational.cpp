#include <bits/stdc++.h>
using namespace std;
void swap(int n,int arr[])
{int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            //swap(arr[low],arr[mid]);
            int temp=arr[mid];
            arr[mid]=arr[low];
            arr[low]=temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        mid++;
        else
        {
            //swap(arr[mid],arr[high]);
            int temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }     
    }
}
int main()
{
    int arr[6]={2,0,2,1,1,0};
    swap(6,arr);
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
}