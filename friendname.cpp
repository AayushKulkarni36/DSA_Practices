#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    char first=toupper(str[0]);
    char second = toupper(str[str.length()-1]);
    cout<<first<<"."<<second;

}