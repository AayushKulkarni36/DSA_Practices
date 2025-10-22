#include <bits/stdc++.h>
using namespace std;
int gcd(int n1, int n2)
{
    vector<int>v;
    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0 && n2%i==0)
            v.push_back(i);
    }
    cout<<"Common Factors\n";
     for(auto it:v)
        cout<<it<<" ";
     cout<<"\nGCD:"<<v.back();
     return v.back();
}
void lcm(int n1, int n2,int gcd)
{
    
     cout<<"\nLCM:"<<(n1*n2)/gcd;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int GCD=gcd(n1,n2);
    lcm(n1,n2,GCD);
 
}