#include<bits/stdc++.h>
using namespace std;
int foo(int n)
{
    if(n==1) return n;
    return n * foo(n-1);
}


int main()
{
    int n;
    cin>>n;
    int res=foo(n);
    cout<<"Factorial of "<<n<<":"<<res;
}