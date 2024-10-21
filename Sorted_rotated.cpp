#include <iostream>
using namespace std;

// 3 4 5 1 2 
int main()
{
    cout << "Enter number of elements in an array";
    int n,count;
    cin >> n;
    int arr1[n];

    for(int i=0;i<n;i++)
    {
        cout << "Enter Element :";
        cin >> arr1[i];
    }

    for(int i = 0 ; i<n ; i++)
    {
        if(arr1[i]>arr1[i+1])
        count++;
    }

    if(arr1[0]<arr1[n-1])
    count++;

    if(count==1)
    cout << "Sorted and Rotated";
    else
    cout << "Not Sorted and Rotated";
}