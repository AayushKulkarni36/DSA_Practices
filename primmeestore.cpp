#include<bits/stdc++.h>
using namespace std;
void printprime(int n)
{set<int>s;
    for(int i=2;i<n;i++)
    {
        int cnt=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            cnt++;
        }
        if(cnt==2)s.emplace(i);
    }
    for(auto it:s)
    {
        cout<<it<<" ";
    }
}


int main()
{
    printprime(36);
}