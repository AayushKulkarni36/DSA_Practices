#include<bits/stdc++.h>
using namespace std;
void checkprime(int n)

{   
  if(n<2)
  {
    cout<<"Not a prime number";
  return;
  }
  else{
    for(int i=2;i*i<=n;i++)
    {
      if(n%i==0)
      {
        cout<<"Not a Prime number\n";
        return;
      }
    }
    cout<<"Prime\n";
  }
}

void storeprime(int n)
{
  
  vector<int>v;
  for (int i=2;i<n;i++)
  {
    int count=0;
    for(int j=2;j<=i;j++)
    {
      if(i%j==0)
      count++;
    }
    if (count==1)
    v.push_back(i);
  }
    cout<<"prime number till "<<n<<":\n";
       for(auto it : v)
          cout<<it<<" ";
}


int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
      checkprime(n);
      storeprime(n); 
    }
}