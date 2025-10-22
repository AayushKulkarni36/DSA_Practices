#include<bits/stdc++.h>
using namespace std;
bool validAnagram(string s,string t)
{
    if(s.size()!=t.size()) return false;
    unordered_map<char,int>freq;
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]]++;
        freq[t[i]]--;
    }
    for(auto it:freq)
    {
        if(it.second!=0)
        return false;
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    if(validAnagram(s,t))
    cout<<"it is valid Anagram";
    else cout<<"it is not valid Anagram";

}