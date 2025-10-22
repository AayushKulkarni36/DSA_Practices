#include <iostream>
using namespace std;

//code to create a dynamic 2d matrix using pointer and taking input from users then ....adding the diagonals (left to right and right to left ) and returning their sum.

int main() {
    int n;
    int sum=0;


    cout << "Enter the number of rows: ";
    cin >> n;

    // Dynamically allocate memory for the 2D array
    // Create an array of pointers (rows)
    int** dynamicArray = new int*[n]; 

    // For each row, create an array of integers (columns)
    for (int i = 0; i < n; i++) {
        dynamicArray[i] = new int[n];  
    }

    // Get input from the user to populate the array
    cout << "Enter elements for the array:" <<   endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dynamicArray[i][j];
            if(i==j)
                sum+=dynamicArray[i][j];
        }
    }
    std::cout << "\nYour 2D array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << std::endl;
    }

    for (int i = 0; i < n; i++) 
            sum-=dynamicArray[i][n-1-i];    
    cout<<"Sum of diagonals:"<<sum<<endl;

}

