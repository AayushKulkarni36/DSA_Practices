# include<bits/stdc++.h>
using namespace std;
int* rev(int arr[],int n)
{
    int l=0;int r=n-1;
    for(int l=0;l<r;l++,r--)
    {
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
    }
    return arr;
    
}
int main()
{
    int  n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int* arev=rev(arr,n);
    for(int i=0;i<n;i++)
    cout<<arev[i]<<" ";
    delete arr;
    
}