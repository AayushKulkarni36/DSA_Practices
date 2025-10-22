#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    int a=0;int b=1;int n=5;
    int sum=0;
    for (int i=2;i<=n+1;i++)
    {
        int c=a+b;
        cout<<a<<" ";
        sum+=a;
        a=b;
        b=c;
        
    }
    cout<<endl<<sum;
}

*/

int fibo(int n)
{
    if(n<=1) return n;
    return fibo(n-2)+fibo(n-1);
}

int main()
{int n=5;
    int sum=0;
    for(int i=0;i<n;i++)
    {sum+=fibo(i);
        cout<<fibo(i)<<" ";
    }
    cout<<endl<<sum;
}