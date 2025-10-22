#include<iostream>
using namespace std;
void print1(int n)
{

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n+1)-i;j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<=2*i-2;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=(n+1)-i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<=2*((n+1)-i)-2;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}


int main()
{
    int n;
    cin>>n;
    print1(n);
}