#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,target;
    cin>>n>>target;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        if(num%target==0)
        cnt++;
    }
    cout<<cnt<<endl;
    return;
    
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
         solve();
    }
    return 0;
}