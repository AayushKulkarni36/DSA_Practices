/// 2. Write a program to find the pairs with the given sum in an array using Brute-Force approach.
// Input: [1,2,3,4,5,6,7,8], target = 10
// Output: [[2,8],[3,7],[4,6],[5,5]]

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> findtarget(vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    vector<pair<int, int>> ans;
    while (left <= right)
    {
        if (arr[left] + arr[right] > target)
        {
            right--;
        }
        else if (arr[left] + arr[right] < target)
        {
            left++;
        }
        else
        {

            ans.push_back({arr[left], arr[right]});
            left++;
            right--;
        }
    }

    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<pair<int, int>> ans = findtarget(arr, 10);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[" << ans[i].first << ',' << ans[i].second << "]";
    }
}