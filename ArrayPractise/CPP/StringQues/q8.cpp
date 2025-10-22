// 8. Longest Substring Without
#include <bits/stdc++.h>
using namespace std;
// bool UniqueOrnot(string &s, int start, int end)
// {
//     unordered_set<char> mpp;
//     for (int i = start; i <= end; i++)
//     {
//         if (mpp.count(s[i]))
//             return false;
//         mpp.insert(s[i]);
//     }
//     return true;
// }
// int LongestSub(string &s)
// {
//     int n = s.size();
//     int maxlen = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (UniqueOrnot(s, i, j))
//                 maxlen = max(maxlen, j - i + 1);
//         }
//     }
//     return maxlen;
// }

int LongestSub(string &s)
{
    unordered_set<char> mpp;
    int n = s.size();
    int maxlen = 0;
    int left = 0;
    for (int right = 0; right < n; right++)
    {
        while (mpp.count(s[right]))
        {
            mpp.erase(s[left]);
            left++;
        }
        mpp.insert(s[right]);
        maxlen = max(maxlen, right - left + 1);
    }
    return maxlen;
}

int main()
{
    string s = "abcabcbb";
    cout << LongestSub(s);
}
