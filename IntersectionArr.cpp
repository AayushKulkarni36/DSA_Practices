#include <bits/stdc++.h>
using namespace std;
void intersection(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> ans;
    vector<int> vis(n2, 0);
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j] && vis[j] == 0)
            {
                ans.push_back(arr1[i]);
                vis[j] = 1;
                break;
            }
            if (arr1[i] < arr2[j])
                break;
        }
    }

    for (auto it : ans)
    {
        cout << it << " "; 
    }
}
int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> arr2 = {2, 3, 3, 5, 6, 6, 7};
    intersection(arr1, arr2);
}