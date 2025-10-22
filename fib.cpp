#include<bits/stdc++.h>
using namespace std;


int fibo(int n)
{
    if(n==0||n==1)return n;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n =7;
    for(int i=0;i<n-1;i++)
        cout<<fibo(i)<<" ";
}