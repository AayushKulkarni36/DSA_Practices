#include <bits/stdc++.h>
using namespace std;
int BinSearch(vector<int> arr, int k)
{
    int mid;
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] > k)
            high = mid - 1;

        else if (arr[mid] < k)
            low = mid + 1;

        else
            return mid;
    }
    return -1;
}
int main()
{
    int k = 44;
    vector<int> arr = {2, 4, 5, 6, 9, 10, 15, 23, 44};
    int index = BinSearch(arr, k);
    cout << "Found at:" << index;
}