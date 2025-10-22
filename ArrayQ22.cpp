/*Question: 
You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should return the array of nums such that the the array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.*/


#include <bits/stdc++.h>
using namespace std;
/*void rearrangeElement(vector<int> &arr)
{
    int n = arr.size();
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
    for (int i = 0; i < n /2; i++)
    {
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }
}
    */

vector<int> rearrangeElement(vector<int> &arr)
{
    int n = arr.size();
    int pos = 0;
    int neg = 1;
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            ans[pos] = arr[i];
            pos += 2;
        }
        else
        {
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    vector<int> res = rearrangeElement(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << res[i] << " ";
}