// 3. Count Vowels and Consonants
#include <bits/stdc++.h>
using namespace std;

pair<int, int> vowelsAndconso(string &s)
{
    string vowels = "aeiouAEIOU";
    int vowel_count = 0;
    int conso_count = 0;
    pair<int, int> ans;

    for (char c : s)
    {
        if (isalpha(c))
        {
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c ==  'u')
            {
                vowel_count++;
            }
            else
                conso_count++;
        }
    }
    return {vowel_count, conso_count};
}
int main()
{
    string s = "Aayush";
    pair<int, int> ans = vowelsAndconso(s);
    cout << "Vowels: " << ans.first << "Conso: " << ans.second;
}