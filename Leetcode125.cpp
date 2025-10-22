//  A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers..

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isvalid(char ch)
    {
        return (ch >= 'a' && ch <= 'z') ||
               (ch >= 'A' && ch <= 'Z') ||
               (ch >= 0 && ch <= 9);
    }

    char lowercase(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 0 && ch <= 9))
            return ch;

        return ch - 'A' + 'a';
    }

    bool checkPalindrome(const string &s)
    {
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[s.size() - i - 1])
                return 0;
        }
        return 1;
    }

public:
    bool isPalindrome(string s)
    {
        string temp = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isvalid(s[i]))
                temp.push_back(lowercase(s[i]));
        }
        return checkPalindrome(temp);
    }
};
int main()
{
    Solution sol;
    string s;
    cout << "Enter a string: \n";
    getline(cin, s);
    if (sol.isPalindrome(s))
        cout << "Palidrome";
    else
        cout << "Not palindrome";
}
