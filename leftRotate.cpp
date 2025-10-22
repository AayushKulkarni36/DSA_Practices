#include <bits/stdc++.h>
using namespace std;
/*
vector<int> leftRotateByk(vector<int> &arr, int k)
{
    vector<int> temp;
    int n = arr.size();
    for (int i = 0; i < k; i++)
    {
        temp.push_back(arr[i]);
    }
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    int j = 0;
    for (int i = n - k; i < n;   i++)
    {
        arr[i] = temp[j];
        j++;
    }

    return arr;
}
    */
void reverse(vector<int> &arr, int left, int right)
{
    while (left <= right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
vector<int> leftRotateByk(vector<int> &arr, int k)
{
    int n = arr.size()-1;
    reverse(arr, 0, k - 1);
    reverse(arr, k, n);
    reverse(arr, 0, n);
    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    leftRotateByk(arr, 3);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}