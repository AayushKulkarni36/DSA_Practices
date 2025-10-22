#include<bits/stdc++.h>
using namespace std;
bool rotatedSorted(vector<int>&arr)
{
    int cnt=0;
    int n =arr.size();
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>arr[(i+1)%n] )cnt++;
    }
    if(cnt<=1) return true;
    return false;
}
int main()
{
    
    int n;
    
    cout<<"Enter size n:\n";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    if(rotatedSorted(arr))
    cout<<"true";
    else cout<<"false";
}