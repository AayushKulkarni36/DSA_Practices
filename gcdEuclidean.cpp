#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while(a>0 && b>0)
    {
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int res=gcd(n1,n2);
    cout<<res;
 
 
}