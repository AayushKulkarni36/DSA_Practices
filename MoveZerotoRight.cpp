#include <bits/stdc++.h>
using namespace std;
/*
void MoveZeroes(vector<int>&arr)
{
    vector<int>temp;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
    }
    int n = temp.size();

    for (int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    for(int i=n;i<arr.size();i++)
    {
        arr[i]=0;
    }
    for(auto it :arr)
    {
        cout<<it<<" ";
    }

}
    */

void MoveZeroes(vector<int> &arr)
{
    int j;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
int main()
{
    vector<int> arr = {0, 3, 0, 2, 1, 5, 0, 6, 0, 4, 6, 0, 2, 1};
    MoveZeroes(arr);
}