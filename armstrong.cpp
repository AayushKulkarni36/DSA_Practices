#include <bits/stdc++.h>
using namespace std;
bool isArmstrong(int n)
{

    int temp = n;
    int sum = 0;
    int digit = log10(n) + 1;

    while (temp > 0)
    {
        int last = temp % 10;
        int power = 1;
        for (int i = 0; i < digit; i++) // OR int power = pow(last,digit)
            power *= last;

        sum += power;
        temp /= 10;
    }
    return n == sum;
}

int main()
{

    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
        cin >> n;
    if (isArmstrong(n))
        cout << "Armstrong";
    else
        cout << "Not armstrong";
}