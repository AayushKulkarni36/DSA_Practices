// Given a string s containing only lowercase English letters, find the total count of all substrings that begin and end with the same character.
#include <bits/stdc++.h>
using namespace std;
int find_substring(string &s)
{
    int n = s.size();
    vector<string> ans;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (s[i] == s[j])
            {
                string sub = s.substr(i, j - i + 1);
                ans.push_back(sub);
                cnt++;
            }
        }
    }
    for (string sub : ans)
        cout << sub << ",";
    cout << endl;
    return cnt;
}
int main()
{
    string s = "abcab";
    cout << find_substring(s);
}