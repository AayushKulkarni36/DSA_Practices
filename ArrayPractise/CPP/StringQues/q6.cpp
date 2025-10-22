#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str ="ayush";
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str;

}