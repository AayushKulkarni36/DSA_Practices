#include <iostream>
using namespace std;
int int_cost=18;
int ext_cost=12;

float estimate(int n,int m,float a[],float b[])
{
    float sum=0;
    for(int i=0;i<n;i++)

        sum+=a[i]*int_cost;
    for(int i=0;i<m;i++)
        sum+=b[i]*ext_cost;
    return sum;
}
int main()
{
    int n,m;
  
    cout<<"Enter number of interior walls\n";
    cin>>n;
    cout<<"Enter number of exterior walls\n";
    cin>>m;
    cout<<"Enter SA of interior walls\n";
      float a[n];
    float b[m];
    for(int i=0;i<n;i++)
     cin>>a[i];
    cout<<"Enter SA of exterior walls\n";
    for(int i=0;i<m;i++)
     cin>>b[i];
     float res=estimate(n,m,a,b);
     cout<<"\nRs."<<res;
}