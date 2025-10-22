#include<bits/stdc++.h>
using namespace std;
vector<int> remove(vector<int>&arr)
{
    int i=0;

    for(int j=1;j<arr.size();j++)
    {
        if(arr[i]!=arr[j])
        {i++;
        arr[i]=arr[j];
        }
        
    }
    arr.resize(i+1);
    return arr;
}
int main()
{
    vector<int>arr{1,1,2,2,2,3,4,4};
    remove(arr);
    for(auto it:arr)
    cout<<it<<" ";

}