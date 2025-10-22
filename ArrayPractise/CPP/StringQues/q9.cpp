// valid palindrome

#include <bits/stdc++.h>
using namespace std;
bool validPalindrome(string &s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        if (!isalnum(s[start]))
        {
            start++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[start]) != tolower(s[end]))
            return false;
        start++;
        end--;
    }
    return true;
}
int main()
{
    string s = "AC3?e3c&a";
    if (validPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not palin";
}