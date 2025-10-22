#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>& arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i;j<arr.size();j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void insertionsort(vector<int>& arr)
{
    for(int i=0;i<arr.size();i++)
    { 
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
            
        }
        cout<<"RUNS\n";
        
    }
}
int main()
{
    vector<int> arr={3,1,6,3,78,4,2,0,6,78,4};
    selectionsort(arr);
    //insertionsort(arr);
    for(int i=0;i<arr.size();i++)
     cout<<arr[i]<<" ";
     
}