#include<bits/stdc++.h>
using namespace std;
int findlargest(vector<int>&arr)
{
    int l=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>l)
        {
            l=arr[i];
        }
    } 
    return l;
}
int main()
{
    vector<int>arr={5,3,21,5,3,6,8,6,1};
    int l=findlargest(arr);
    cout<<l;
}