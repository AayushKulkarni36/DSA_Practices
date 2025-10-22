#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int rows;
    int cols;
    cin>>rows;
    cin>>cols;
    int** mat= new int* [rows]; //Pointer to store rows;
    for(int i=0;i<rows;i++)
         mat[i]= new int[cols];
    
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>mat[i][j];
        }
    }

      for(int i=0;i<rows-1;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<rows;i++)
        delete mat[i];
    delete mat;
}