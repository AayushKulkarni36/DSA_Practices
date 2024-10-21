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
    int i,j;
    for(i = 0; i <= n ; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Second Largest Element is: " << arr[1] ;
}