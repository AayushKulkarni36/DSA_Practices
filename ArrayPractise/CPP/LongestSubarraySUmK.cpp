#include <bits/stdc++.h>
using namespace std;
int findLongestSubArrLength(vector<int> &arr, int k)
{
    int n = arr.size();
    int Prefixsum = 0;
    int Maxlen = 0;
    unordered_map<int, int> PrefixSumMap;
    for (int i = 0; i < n; i++)
    {
        Prefixsum += arr[i];
        if (Prefixsum == k)
        {
            Maxlen = max(Maxlen, i + 1);
        }
        int rem = Prefixsum - k;
        if (PrefixSumMap.find(rem) == PrefixSumMap.end())
        {
            int len = i - PrefixSumMap[rem];
            Maxlen = max(len, Maxlen);
        }
        if (PrefixSumMap.find(Prefixsum) == PrefixSumMap.end())
        {
            PrefixSumMap[Prefixsum] = i;
        }
    }
    return Maxlen;
}
int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    cout << findLongestSubArrLength(arr, 3);
}