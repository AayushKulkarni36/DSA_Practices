// .. remove all occurances of a substring
#include <bits/stdc++.h>
using namespace std;
void removeOcc(string &s)
{
    int n = s.size();
    string part = "abc";
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    cout << s;
}
int main()
{
    string s = "daabcabcabcbcb";
    removeOcc(s);
}
