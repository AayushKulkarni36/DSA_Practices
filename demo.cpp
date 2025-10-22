#include <iostream>
#include <string>
using namespace std;
/*
int main()
{
    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }
    else if( marks<=44){
        cout<<"E";
    }
   else if( marks<=49){
        cout<<"D";
    }
     else if(marks<=59){
        cout<<"C";
    }
     else if( marks<=69){
        cout<<"B";
    }
     else if( marks<=89){
        cout<<"A";
    }

}


int main()
{
    int age;
    cin>>age;
    if(age<18){
        cout<<"Not eligible for the job";
    }
    else if(age<=57){
        cout<<"Eligible for the job"<<"\n"; 
        if(age>=50 && age<=57)
        {
            cout<<"But retirement close!";
        }
        else if(age>=60){
            cout<<" retirement !";
           }
    
    }else if(age>=60){
        cout<<" retirement !";
}
}




int main()
{
    int days;
    cin >> days;
    switch(days){
        case 1 : 
        cout<<"Monday";
        
         case 2 : 
        cout<<"tue";
        break;
         case 3 : 
        cout<<"wed";
        break;
         case 4 : 
        cout<<"thur";
        break;
         case 5 : 
        cout<<"fri";
        break;
         case 6 : 
        cout<<"sat";
        break;
         case 7 : 
        cout<<"sun";
        break;
        default:
        cout<<"Not a day!!"; 
 
    }
}



void sum (int n1, int n2)
  {
    int n3 = n1+n2;
      cout<<n3;

  }
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    sum(n1,n2);
}
   

int min(int arr[5])
{
 
    int min =arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int max(int arr[5])
{
    int max = arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int mini= min(arr);
    int maxi= max(arr);
    cout<<"mini:"<<mini<<"\n";
    cout<<"maxi:"<<maxi;

}


void swap(int &a,int &b)
{
    int temp =a;
    a=b;
    b=temp;
    cout<<"a:"<<a<<"b:"<<b<<"\n";
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<"a:"<<a<<"b:"<<b;
}
    
void doSomething(string &s)
{
    s[0]='t';
    cout<<s;
}
int main()
{
    string s = "Aayush";
    doSomething(s);
    cout<<s;
}
         */

void doSomething(int arr[],int n)
{
    arr[0]+=10;
    cout<<"Array is Funct:"<<arr[0]<<endl;

}
int main()
{

    int n=5;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    doSomething(arr,n);
    cout<<"Array is Main:"<<arr[0]<<endl;
}