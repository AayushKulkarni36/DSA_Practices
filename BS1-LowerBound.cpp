#include <bits/stdc++.h>
using namespace std;

int LowerBound(vector<int> &arr, int low, int high, int x)
{
    int ans = arr.size();

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int lb = lower_bound(arr.begin(),arr.end(),5)-arr.begin();
    int low = 0;
    int high = arr.size() - 1;  

    int ans = LowerBound(arr, low, high, 5);
    cout << "Found at:" << ans<<endl;
    cout<<"BY lower_bound() Found at:"<<lb;
}