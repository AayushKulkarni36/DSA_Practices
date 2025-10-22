#include<iostream>
using namespace std;
 /*
void print1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}


//pyramid straight
void print1(int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }

        for(int j =1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}

//pyramid ulta
void print2(int n)
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=((n-1)+i)-n;j++)
        {
            cout<<"  ";
        }

        for(int j =1;j<=2*(n-i)+1;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}

 
//diamond
void print3(int n)
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<2*(5-(i+1))+1;j++){
        cout<<"* ";
        }
        cout<<"\n";
    }
    
}

  



// vertically half diamond
void print4(int t)
{
    for (int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
       for(int i=1;i<5;i++)
        {
           for(int j=1;j<=5-i;j++)
           {
            cout<<"* ";
           }
           cout<<"\n";
        }
}


//method 2
 void print5(int t)
 {
    for(int i=1;i<=2*t-1;i++)
    {
        int stars =i;
        if (i>t) stars=2*t-i;
       
        for(int j=1;j<=stars;j++)
        {
            cout<<"* ";

        }
        cout<<"\n";
    }
 } */

void print6(int t)
{
    for(int i=1;i<=t;i++)
    {int start;
        if(i%2==0) start=0;
            else start =1;
        for(int j=1;j<=i;j++)
        {
            cout<<start<<" ";
             start=1-start;
        }
       
        cout<<"\n";
    }
}

int main()
{
    int t;
    cin>>t;
    print6(t);

}