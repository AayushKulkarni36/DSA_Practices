#include <bits/stdc++.h>
using namespace std;
/*
bool linearSearch(vector<int> arr, int x)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return true;
    }
    return false;
}
int findLongestConsecSeq(vector<int> arr)
{
    int longest = 0;

    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        int x = arr[i];
        while (linearSearch(arr, x) == true)
        {
            x = x + 1;
            cnt++;
        }
        longest = max(longest, cnt);
    }

    return longest;
}
*/

int findLongestConsecSeq(vector<int> arr) // better 
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int last_smallest = INT_MIN;
    int cnt = 0;
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == last_smallest)
        {
            cnt++;
            last_smallest = arr[i];
        }
        else if (arr[i] != last_smallest)
        {
            cnt = 1;
            last_smallest = arr[i];
        }
        largest = max(cnt, largest);
    }
    return largest;
}

int main()
{
    vector<int> arr{100, 1, 3, 2, 101, 102, 103, 4, 5};
    cout << findLongestConsecSeq(arr);
}