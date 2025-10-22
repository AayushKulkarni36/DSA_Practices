#include <bits/stdc++.h>
using namespace std;
// string reverse(string & s)
// {
//    string rev ="";
//    int n=s.size();
//    for (int i=0;i<n;i++)
//    {
//         rev = s[i]+rev;
//    }
//    return rev;

// }

// string reverse(string & s)
// {
//    int low=0;
//    int high=s.size()-1;
//    while(low<=high)
//    {
//         swap(s[low],s[high]);
//         low++;
//         high--;
//    }
//    return s;

// }

string reverse(string &s, int start, int end)
{

    if (start >= end)
        return s;
    swap(s[start], s[end]);
    return reverse(s, start + 1, end - 1);
}
int main()
{
    string s = "Hello";
    string ans = reverse(s, 0, s.size() - 1);
    cout << ans;
}