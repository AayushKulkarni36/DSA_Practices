#include<bits/stdc++.h>
using namespace std;
bool sortedOrNot(vector<int>&arr)
{
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>=arr[i-1])continue;
        else return false;
    }
    return true;
}
int main()
{
    vector<int>arr={1,2,0,4,5};
    if(sortedOrNot(arr))
        cout<<"Sorted";
    else cout<<"Not sorted";
}