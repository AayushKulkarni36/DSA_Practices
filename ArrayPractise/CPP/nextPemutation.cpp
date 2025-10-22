#include <bits/stdc++.h>
using namespace std;
vector<int> nextPemutationn(vector<int> &arr)
{
    int n = arr.size();
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i + 1] > arr[i])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(arr.begin(), arr.end());
        return arr;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > arr[index])
            swap(arr[i], arr[index]);
        break;
    }
    reverse(arr.begin() + index + 1, arr.end());
    return arr;
}
int main()
{
    vector<int> arr = {3,2,1};
    vector<int> ans = nextPemutationn(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}