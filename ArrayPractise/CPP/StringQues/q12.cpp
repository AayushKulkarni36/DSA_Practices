// Reverse word in string
#include <bits/stdc++.h>
using namespace std;
void reverseWords(string &s)
{
    string ans = "";
    reverse(s.begin(), s.end());
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }

        if (word.length() > 0)
            reverse(word.begin(), word.end());
        ans += " " + word;
    }
    cout << ans;
}

int main()
{
    string s1 = "The sky is pink";
    reverseWords(s1);
}