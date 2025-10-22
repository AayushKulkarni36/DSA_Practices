#include <bits/stdc++.h>
using namespace std;
/*
void Union(vector<int> &arr1, vector<int> &arr2)
{
    set<int> st;
    for (int i = 0; i < arr1.size(); i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        st.insert(arr2[i]);
    }
    for (auto it : st)
    {
        cout << it << " ";
    }
}
*/

void Union(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> Unionarr;
    int i = 0;
    int j = 0;
    while (i < n1 && i < n2)
    {
        if (arr1[i] < arr2[j])
        {
            if (Unionarr.empty() || Unionarr.back() != arr1[i])
            {
                Unionarr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (Unionarr.empty() || Unionarr.back() != arr2[j])
            {
                Unionarr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (Unionarr.empty() || Unionarr.back() != arr1[i])
        {
            Unionarr.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (Unionarr.empty() || Unionarr.back() != arr2[j])
        {
            Unionarr.push_back(arr2[j]);
        }
        j++;
    }

    for (auto it : Unionarr)
    {
        cout << it << " ";
    }
}
int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6, 6, 7};
    Union(arr1, arr2);
}