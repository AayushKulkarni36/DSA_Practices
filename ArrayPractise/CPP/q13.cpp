#include <bits/stdc++.h>
using namespace std;
vector<char> stringCompression(vector<char> &chars)
{
    int n = chars.size();
    int idx = 0;
    for (int i = 0; i < n; )
    {
        int count = 0;
        char ch = chars[i];
        while (i < n && chars[i] == ch)
        {
            i++;
            count++;
        }
        if (count == 1)
            chars[idx++] = ch;
        if (count > 1)
        {
            chars[idx++] = ch;
            string str = to_string(count);
            for (char dig : str)
            {
                chars[idx++] = dig;
            }
        }
        //i--;
    }
    chars.resize(idx);
    return chars;
}
int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'b', 'c', 'c'};
    vector<char> ans = stringCompression(chars);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}