// // #string permutation
// 1. Check if One String is a Permutation of Another
// Problem: Given two strings s1 and s2, check if s2 contains a permutation of s1.

// Examples:Input: s1 = "ab", s2 = "eidbaooo"
// Output: true
// Explanation: s2 contains "ba" which is a permutation of "ab"

// Input: s1 = "ab", s2 = "eidboaoo"
// Output: false
// Explanation: No permutation of "ab" exists in s2

#include <bits/stdc++.h>
using namespace std;

bool isFreqSame(vector<int> freq1, vector<int> freq2)
{
    for (int i = 0; i < 26; i++)
    {
        // cout << freq1[i] << freq2[i];
        if (freq1[i] != freq2[i])
            return false;
    }
    return true;
}
bool check_inclusion(string &s1, string &s2)
{
    vector<int> freq1(26, 0);
    for (int i = 0; i < s1.length(); i++)
    {
        freq1[s1[i] - 'a']++;
    }
    int windowSize = s1.length();
    for (int i = 0; i < s2.length(); i++)
    {
        vector<int> windowFreq(26, 0);
        int idx = i;
        int windIndex = 0;
        while (windIndex < windowSize && idx < s2.length())
        {
            windowFreq[s2[idx] - 'a']++;
            windIndex++;
            idx++;
        }
        // cout << windowFreq[i];
        if (isFreqSame(freq1, windowFreq))
            return true;
    }
    return false;
}
int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    if (check_inclusion(s1, s2))
        cout << "True";
    else
        cout << "false";
}