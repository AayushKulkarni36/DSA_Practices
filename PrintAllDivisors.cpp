#include <bits/stdc++.h>
using namespace std;
/*
int* printDivisors(int *arr,int n,int &size)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) arr[size++]=i;
    }
    return arr;
}
int main()
{
    int n,size=0;
    cin>>n;
    int* arr = new int[n];
    int* div = printDivisors(arr,n,size);
    for(int i=0;i<size;i++)
        cout<<div[i]<<" ";
    delete arr;
}*/

// approach 2
void printDivisors(int n)
{
    vector<int> v;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            v.push_back(i);
        if ((n / i) != i)
            v.push_back(n / i);
    }
    sort(v.begin(), v.end());
    for (auto it : v)
        cout << it << " ";
}
int main()
{
    int n;
    cin >> n;
    printDivisors(n);
}
