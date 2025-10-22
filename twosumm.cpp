#include <bits/stdc++.h>
using namespace std;
/*
void twosum(vector<int> &arr, int target)
{
    vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }
    for (auto it : ans)
        cout << it << " ";
}
*/
void twosum(vector<int> &arr, int target)
{
    unordered_map<int, int> mpp;
    int n = arr.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {

        int num = arr[i];
        int rem = target - num;
        if(mpp.find(rem)!=mpp.end())
        {
            ans.push_back(rem);
            ans.push_back(num);
        }
        mpp[num]++;
    }
    for (auto it : ans)
        cout << it << " ";
}
int main()
{
    vector<int> arr{2, 7, 4, 5, 7};
    twosum(arr, 9);
}