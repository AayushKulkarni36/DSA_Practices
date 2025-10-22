#include <bits/stdc++.h>
using namespace std;
// bool anagram(string &s1, string &s2)     
// {
//     unordered_map<char, int> freq;

//     if (s1.size() != s2.size())
//         return false;
//     for (int i = 0; i < s1.size(); i++)
//     {
//         freq[s1[i]]++;
//         freq[s2[i]]--;
//     }
//     for (auto it : freq)
//     {
//         // cout << it.first << it.second << endl;
//         if (it.second != 0)
//             return false;
//     }
//     return true;
// }

bool anagram(string &s1, string &s2)
{
    if (s1.size() != s2.size())
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}
int main()
{
    string s1 = "nap";
    string s2 = "pan";
    if (anagram(s1, s2))
        cout << "Anagram";
    else
        cout << "Not Anagram";
}