#include <bits/stdc++.h>
using namespace std;
int Floor(vector<int> arr, int x)
{
    int ans = -1;
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= x)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans;
}
int Ceil(vector<int> arr, int x)
{
    int Ans = -1;
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
        {
            Ans = arr[mid];
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return Ans;
}
int main()
{
    vector<int> arr = {10, 20, 30, 35, 40};
    int floor = Floor(arr, 32);
    cout << "Floor: " << floor<<endl;
    int ceil = Ceil(arr, 32);
    cout << "Ceil: " << ceil;
} 