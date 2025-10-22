#include <bits/stdc++.h>
using namespace std;
vector<int> FinddupliAndMissing(vector<int> &arr)
{
    int n = arr.size();
    int sumArr = 0;
    int sum = (n * (n + 1)) / 2;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {

        int count = 0;
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        sumArr += arr[i];
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > 1)
            ans.push_back(arr[i]);
    }
    ans.push_back(sum - sumArr);
    return ans;
}

int main()
{
    vector<int> arr = {1, 3, 3, 4, 5};
    vector<int> ans = FinddupliAndMissing(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}