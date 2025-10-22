#include <bits/stdc++.h>
using namespace std;

int MissingNumb(vector<int> &arr)
{
    int n = arr.size();    // values are intended in [1..n]
    int hash[n + 1] = {0}; // index 0 unused for 1..n

    for (int i = 0; i < n; i++) // FIX: start from 0 to mark all elements
    {
        int x = arr[i];
        if (1 <= x && x <= n) // optional safety
            hash[x] = 1;
    }

    for (int i = 1; i <= n; i++) // scan 1..n to find missing
    {
        if (hash[i] == 0)
            return i;
    }
    return -1; // if inputs were perfect, shouldn’t reach
}

int main()
{
    vector<int> arr{1, 2, 4, 5}; // n = 4, domain 1..4
    int ans = MissingNumb(arr);  // expected: 3
    cout << ans;
}
