#include<bits/stdc++.h>
using namespace std;
//TIME COMPLEXITY:- O(N)


/* // linearly from 1 to n recurssion 
int cnt=1;
void fun(int n)
{
    if(cnt==n) return;
    cout<<cnt<<("Ayush\n");
    cnt++;
    fun(n);
}
int main()
{
    int n;
    cin>>n;
    fun(n);
}



// linearly from n to 1 recurssion 
void fun(int n)
{
    if(n==0) return;
    cout<<n<<("Ayush\n");
    fun(n-1);
}
int main()
{
    int n;
    cin>>n;
    fun(n);
}

 
//  BACKTRACKING 1 TO N
void foo(int i,int n)
{
    if(i<1) return;
    foo(i-1,n);
    cout<<i<<" ";

}
int main()
{
    int n;
    cin>>n;
    foo(n,n);
}
   
//  HEAD AND TAIL RECURSION
void foo(int i,int n)
{
    if(i==n+1) return  ;
    cout<<n<<" "; //head rec
    foo(i,n-1);
    cout<<n<<" ";//tail rec
    

}
int main()
{
    int n;
    cin>>n;
    foo(1,n);
}
    */

    
    //  Addition of first N natural numbers
int foo(int n)
{
  if(n==0) return 0;
 
  return n+foo(n-1);
}
int main()
{
    int n;
    cin>>n;
   int res =  foo(n);
   cout<<res;
}