/*Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.*/

#include <bits/stdc++.h>
using namespace std;

/*int MaxSubarray(vector<int> arr)
{
    int n = arr.size();
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            maxi = max(sum, maxi);
        }
    }

    return maxi;
}*/

int MaxSubarray(vector<int> arr)
{
    int sum = 0;
    int start=0;
    int ansStart=0;
    int ansEnd=0;
    int maxi = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {    if(sum==0) 
        {
            start=i;
        }
        sum += arr[i];
    
        

        if (sum > maxi)
        {
            maxi = sum;
             ansStart= start;
             ansEnd=i;
        }
        if (sum < 0)
            sum = 0;
    }

    for(int i=ansStart;i<=ansEnd;i++)
    {
        cout<<arr[i]<<" ";
    }
    puts("");
    return maxi;
}
int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << MaxSubarray(arr);
}