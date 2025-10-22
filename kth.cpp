#include <bits/stdc++.h>
using namespace std;
void swap(int n,int k,int arr[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int n;
    int k;
    cout<<"Enter size :\n";
    cin>>n;
    cout<<"Enter index you want to return:\n";
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    swap(n,k,arr);
    cout<<"\n"<<"Kth index element:"<<arr[k-1];
}