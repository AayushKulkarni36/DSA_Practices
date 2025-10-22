/*
#include <bits/stdc++.h>
using namespace std;
void printFibb(int n)
{
  {
    int a=0,b=1,sum=0;
    if(a==0||b==1)cout<<a<<" "<<b<<" ";
    while(b<=n)
    {
        int c=a+b;
        if(c<n)
        {
            cout<<c<<" ";
            sum+=c;
        }
        a=b;
        b=c;

    }
    cout<<endl<<sum;
  }

}

int main()
{
    int n = 36;
    printFibb(n);
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int Fibbo(int n)
{
  if (n <= 1)
    return n;
  return Fibbo(n - 1) + Fibbo(n - 2);
}

int main()

{
  int n = 10;
  cout << "Fibbonacci:";
  for (int i = 0; i < n; i++)
    cout << Fibbo(i) << " ";
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()

{
  int n = 10;

  int a = 0;
  int b = 1;
  cout << a << " " << b << " ";
  for (int i = 2; i < n; i++)
  {

    int c = a + b;
    cout << c << " ";
    a = b;
    b = c;
  }
  return 0;
}