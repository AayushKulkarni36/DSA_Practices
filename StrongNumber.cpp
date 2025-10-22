#include <iostream>
using namespace std;
//Strong number.
int fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
int sum = 0;
int separation(int n)
{
    while (n != 0)
    {
        int digit = n % 10;
        sum += fact(digit);
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int res = separation(n);
    if (res == temp)
        cout << res << "==" << temp<<"\nboth are same";
    else cout<<"Not same!";
}
