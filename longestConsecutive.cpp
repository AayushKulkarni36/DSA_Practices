/*Problem Statement: You are given an array of ‘N’ integers. You need to find the length of the longest sequence which contains the consecutive elements.
eg
Input: [100, 200, 1, 3, 2, 4]
Output: 4*/
#include <bits/stdc++.h>
using namespace std;

/*bool LinearSearch(vector<int> arr, int n)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == n)
            return true;
    }
    return false;
}
int LongestConsecutive(vector<int> arr)
{
    int n = arr.size();
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        int x = arr[i];
        while (LinearSearch(arr, x + 1))
        {
            x = x + 1;
            cnt++;
        }
        largest = max(largest, cnt);
    }
    return largest;
}*/

int LongestConsecutive(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int last_smallest = INT_MIN;
    int cnt = 0;
    int largest = 1;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {  
        if (arr[i] - 1 == last_smallest)
        {
            cnt++;
            last_smallest = arr[i];
        }
        if (arr[i] != last_smallest)
        {
            cnt = 1;
            last_smallest = arr[i];
        }
        largest = max(largest, cnt);
    }
    return largest;
}
int main()
{
    vector<int> arr = {100, 200, 1, 3, 2, 4};
    cout << LongestConsecutive(arr);
}