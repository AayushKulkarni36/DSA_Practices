#include <bits/stdc++.h>
using namespace std;
void leftrotate(vector<int> &arr)
{
    int temp = arr[0];
    int n = arr.size();
    for (int i = 1; i < n; i++)
        arr[i - 1] = arr[i];
    arr[n - 1] = temp;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    leftrotate(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}