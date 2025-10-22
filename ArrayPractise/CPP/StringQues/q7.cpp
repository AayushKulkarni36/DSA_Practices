// First Non-Repeating Character

#include <bits/stdc++.h>
using namespace std;
// char FirstnonRepeating(string &s)
// {
//     int n = s.size();
//     for (int i = 0; i < n; i++)
//     {
//         bool isUnique = true;
//         for (int j = 0; j < n; j++)
//         {
//             if (i !=j && s[i] == s[j])
//                 isUnique=false;
//                 break;
//         }
//         if (isUnique == true)
//             return s[i];
//     }
//     return -1;
// }

char FirstnonRepeating(string &s)
{
    unordered_map<char, int> Unique;
    char ans=0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        Unique[s[i]]++;
    }
    for (char c : s)
    {
        if( Unique[c]==1)
            return c;
    }
    return '\0';
}
int main()
{
    string s = "aabb";
    char ans = FirstnonRepeating(s);
    cout << ans;
}