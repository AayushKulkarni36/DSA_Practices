//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.You must implement a solution with a linear runtime complexity and use only constant extra space. 
#include <bits/stdc++.h>
using namespace std;

/*
int findSingleOcc(vector<int>& arr)        BRUTE
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
       int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            cnt++;
        }
        if(cnt==1) return arr[i];
    }
    return -1;
}
    */

/*int findSingleOcc(vector<int>& arr)       //BETTER
{
    int n=arr.size();
int maxi=arr[0];
int mx;
for(int i=0;i<n;i++)
{
    mx = max(maxi,arr[i]);
}
vector<int>hash(mx+1,0);
for(int i=0;i<n;i++)
{
    hash[arr[i]]++;
}
for(int i=0;i<n;i++)
{
    if(hash[arr[i]]==1)
    return arr[i];
}
return -1;

}
*/

/*
int findSingleOcc(vector<int>& arr)       //BETTER
{
    int n=arr.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second==1)
        return it.first;
    }
    return -1;
}
*/

int findSingleOcc(vector<int> &arr) // OPTIMAL
{
    int n = arr.size();
    int Xor = 0;
    for (int i = 0; i < n; i++)
    {
        Xor = Xor ^ arr[i];
    }
    return Xor;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5};
    int single = findSingleOcc(arr);
    cout << single;
}