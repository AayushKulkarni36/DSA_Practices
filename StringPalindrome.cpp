#include<bits/stdc++.h>
using namespace std;
int main()
{

    char str[10];
    cin.getline(str,10);
    int n=strlen(str);
    string ans=str;


    int st=0;
    int e=n-1;
    while(st<e)
    {
        swap(str[st],str[e]);
        st++;e--;
    }
    if(ans==str)cout<<"true";
    else cout<<"false";

    /*string s="madam";
    string ans=s;
    reverse(s.begin(),s.end());
    if(ans==s) 
    cout<<"true";
    else cout<<"false"; 
    */
}