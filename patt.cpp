#include<iostream>
using namespace std;
/*
void print1(int n)
{
    for(int i=0;i<n;i++)
    {int  start;
        if(i%2==0) start =1;
        else start =0; 
        for(int j=0;j<i+1;j++)
        {
            cout<<start<<" ";
            start=1-start;
        }
        cout<<"\n";
    }
} 
    */

 void print2(int n)
 {
     int space =2*(n-1); 
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int j=1;j<=space;j++)
        {
            cout<<"  ";
        }

         for(int j=1;j<=i;j++)
        {
            cout<<i-j+1<<" ";
        }
        cout<<"\n";
        space-=2;

    }
 }

void print3(int n)
{
    for(int i=1;i<=n;i++)
    {char count='A';
        for(int j =1;j<=(n+1)-i;j++)
        {
            cout<<count<<" ";
            count++;
          }
        
        cout<<endl;

    }
}

void print4(int n)
{
    for(int i=1;i<=n;i++)
    {char count ='A';
        int breakpoint = (2*i-1)/2 ;
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<count<<" ";
           
            if(j<=breakpoint)  count++;
            else count--;
        }
        cout<<endl;
        count++;
    }
}
 
void print5(int n)
{
    for (int i=0;i<n;i++)
    {
        for(char ch='E'-i;ch<='E';ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 ||i==n ||j==1 ||j==n)
                cout<<"*"; 
            else cout<<" ";
        }
        
        cout<<"\n";
    }
}



int main()
{
    int n;
    cin>>n;
    print6(n);
}