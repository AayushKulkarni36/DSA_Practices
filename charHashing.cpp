#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int q;
    cin>>q;
int hash[26]={0};   //int hash[256]={0}; is also correct.
{
    for(int i=0;i<s.size();i++)
        hash[s[i]-'a']++;
    
}
    while(q--)
    {
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;    //hash[c] is size=[256]
    }
}