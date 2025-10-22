#include <bits/stdc++.h>
using namespace std;
bool foo(string &s, int i)
{
    if (i >= s.size() / 2)
        return true; // s.size()to find the  length of string
    if (s[i] != s[s.size() - i - 1])
        return false;
    return foo(s, i + 1);
}

int main()
{
    string s;
    cin >> s;
    bool res = foo(s, 0);
    for (int i = 0; i < s.size(); i++)
        cout << s[i];
    if (res == true)
        cout << "\nString is palindrome";
    else
        cout << "\nString is not palindrome";
}
