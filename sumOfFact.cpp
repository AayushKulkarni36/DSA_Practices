#include <bits/stdc++.h>
using namespace std;


int factorial(int n)
{
    if(n<=1)return 1;
    return n* factorial(n-1);
}
int digits(int n)
{int sum=0;
    while(n!=0)
    {
    int last = n%10;
    n/=10;
    int ans = factorial(last);
    sum+=ans;
    }
    return sum;

}
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int sum =digits(n);
    if(sum==temp)
    cout<<"true";
    else cout<<"false";
}