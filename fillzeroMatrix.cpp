#include <bits/stdc++.h>
using namespace std;
/* BRUTE 
void display(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
}
void fillrow(int i, vector<vector<int>> &mat)
{

    int m = mat[0].size();
    for (int j = 0; j < m; j++)
    {
        if (mat[i][j] != 0)
        {
            mat[i][j] = -1;
        }
    }
}
void fillcol(int j, vector<vector<int>> &mat)
{

    int n = mat.size();
    for (int i = 0; i < n; i++)
    {
        if (mat[i][j] != 0)
        {
            mat[i][j] = -1;
        }
    }
}
vector<vector<int>> fillinZero(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 0)
            {
                fillrow(i, mat);
                fillcol(j, mat);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == -1)
            {
                mat[i][j] = 0;
            }
        }
    }
    return mat;
}
*/

void display(vector<vector<int>> &mat)  //Better  
{
    int n = mat.size();
    int m = mat[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

vector<vector<int>> fillinZero(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    vector<int> row(n, 0);
    vector<int> col(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || col[j == 1])
            {
                mat[i][j] = 0;
            }
        }
    }
    return mat;
}
int main()
{
    int row, col;
    cout << "Enter no. of rows:\n";
    cin >> row;
    cout << "Enter no. of cols:\n";
    cin >> col;
    vector<vector<int>> mat(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }

    display(mat);

    vector<vector<int>> ans = fillinZero(mat);
    cout << "Answer:\n";
    display(ans);
}