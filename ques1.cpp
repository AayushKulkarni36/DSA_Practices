//  Write a program to print numbers having exactly 3 factors between 1 and 1000.#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
/*int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 3)
        {
            cout << i << " ";
        }
    }
}*/
bool isPrime(int n)
{   if(n<2)return false;
    for(int i=2;i*i<=n;i++)
    {
        if(i%n==0)
            return false;
    }
    return true;
}
int main()
{
    for (int i = 2; i * i <= 1000; i++)
    {
        if (isPrime(i))
        {
            cout <<i*i<<" ";
        }
    }
}