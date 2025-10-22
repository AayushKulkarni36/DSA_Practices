#include <bits/stdc++.h>
using namespace std;
/*void Leader(vector<int> &arr)
{
    vector<int> v;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            v.push_back(arr[i]);
        }
    }
    for (auto it : v)
        cout << it << " ";
}
        */

void Leader(vector<int> &arr)
{
    int maxi = INT_MIN;
    vector<int> v;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            v.push_back(arr[i]);
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    for (auto it : v)
        cout << it << " ";
}
int main()
{
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    Leader(arr);
}