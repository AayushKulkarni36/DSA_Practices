/*
#include<bits/stdc++.h>
using namespace std;
int* rev(int arr[],int n,int l, int r)
{
    if(l<r)
    {
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        rev(arr,n,l+1,r-1);
    }
    return arr;
}
int main()
{
    int n;
    cin>>n;
    int l=0,r=n-1;
    int* arr =new int [n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int *revv=rev(arr,n,l,r);
    for(int i=0;i<n;i++)
    cout<<revv[i]<<" ";

}
*/
#include<bits/stdc++.h>
using namespace std;
void rev(int arr[],int n,int i)
{
   if(i>=n/2)
   return;
   swap(arr[i],arr[n-i-1]);
   rev(arr,n,i+1);
}
int main()
{
    int n;
    int i=0;
    cin>>n;
    int* arr =new int [n];
    for(int i=0;i<n;i++)cin>>arr[i];
    rev(arr,n,i);
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
}