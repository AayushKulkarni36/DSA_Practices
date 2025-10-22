// 4. Remove Duplicate Characters
#include <bits/stdc++.h>
using namespace std;
// void removeduplicates(string &s)
// {
//     unordered_map<char, int> mpp;
//     string res = "";

//     for (char c : s)
//     {
//         mpp[c]++;
//     }

//     for (char c : s)
//     {
//         if (mpp[c] > 0)
//         {
//             res += c;
//             mpp[c] = 0;
//         }
//     }
//     cout << res;
// }


void removeduplicates(string &s)
{
    set<char> seen;
    string result = "";

    for (char c : s)
    {
        if (seen.find(c) == seen.end())
        {
            seen.insert(c);
            result += c;
        }
    }
    cout << result;
}
int main()
{
    string s = "programming";
    removeduplicates(s);
}
