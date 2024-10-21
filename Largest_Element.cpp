#include <iostream>
using namespace std;

int main()
{
    int n,max;
    cout << "Enter total number of elements in the array : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i<n ; i++)
    {
        cout << "Enter Element :";
        cin >> arr[i];
    }

    for(int i = 0; i<n ; i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }
    cout << "Largest Element is: " << max;
}