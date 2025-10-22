#include <bits/stdc++.h>
using namespace std;
/*
vector<pair<int, int>> twoSum(vector<int> &arr, int target)
{
    vector<pair<int, int>> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back({arr[i], arr[j]});
            }
        }
    }
    return ans;
}
    */

vector<pair<int, int>> twoSum(vector<int> &arr, int target)
{
    int n = arr.size();
    vector<pair<int, int>> ans;

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int rem = target - num;
        if (mpp.find(rem) == mpp.end())
        {
            ans.push_back({num, rem});
        }
        mpp[arr[i]]++;
    }

    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<pair<int, int>> res = twoSum(arr, 10);
    for (auto it : res)
    {
        cout << '[' << it.first << "," << it.second << ']';
    }
}