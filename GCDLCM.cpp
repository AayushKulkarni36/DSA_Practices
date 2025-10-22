#include <bits/stdc++.h>
using namespace std;

int findGcdLcm(int n,int m)
{
    while(n>0&&m>0)
    {
        if(n>m) n=n%m;
        else m =m%n;
        if(n==0) return m;
        else return n;
    }
}

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int GCD=findGcdLcm(n,m);
    int LCM = (n*m)/GCD;
    cout<<"gcd: "<<GCD;puts("");
    cout<<"lcm: "<<LCM;
}