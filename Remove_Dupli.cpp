#include <iostream>
using namespace std;

// 3 4 5 1 2 
int main()
{
    cout << "Enter number of elements in an array";
    int n,count;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout << "Enter Element :";
        cin >> arr[i];
    }
    int j=1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1]) 
        {
            arr[j] = arr[i];
            j++;
        }
    }

    cout << j;
}



