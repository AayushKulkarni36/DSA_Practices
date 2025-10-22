#include <bits/stdc++.h>
using namespace std;
void FindFrequencyOfEachElement(vector<int> &arr)
{
    int n = arr.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << "=" << it.second << endl;
    }
}
int main()
{
    vector<int> arr = {1, 1, 2, 3, 4, 4, 5};
    FindFrequencyOfEachElement(arr);
}