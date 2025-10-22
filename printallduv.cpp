#include<bits/stdc++.h>
using namespace std;
void printDiv(int n)
{
    set<int>v;  //using set to sort the list and store unique elements only.
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)v.emplace(i);
        if(n/i!=i)v.emplace(n/i);
    }
    
    for(auto it:v) cout<<it<<" ";

}
int main()
{
    printDiv(20);
}