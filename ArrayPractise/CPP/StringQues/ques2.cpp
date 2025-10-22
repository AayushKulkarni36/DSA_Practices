// Check if String is Palindrome
#include <bits/stdc++.h>
using namespace std;
bool palindrome(string &s)
{
    string temp = s;
    reverse(s.begin(), s.end());
    return temp == s;
}
int main()
{
    string s = "nan";
    if (palindrome(s))
        cout << "True";
    else
        cout << "False";
}
