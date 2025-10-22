// UNION of 2 arrays.

#include <bits/stdc++.h>
using namespace std;
/*
vector<int> unionn(vector<int>arr1,vector<int>arr2)
{int n1=arr1.size();
    int n2=arr2.size();
    set<int>st;
    for(int i=0;i<n1;i++)
    {
        st.insert(arr1[i]);
    }
     for(int i=0;i<n2;i++)
    {
        st.insert(arr2[i]);
    }
    vector<int> uni;
    int i=0;
    for(auto it:st)
        uni.push_back(it);
    return uni;
}
*/

vector<int> unionn(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> unionArr;
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    return unionArr;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 2, 3, 4, 5, 6, 7};
    vector<int> uni = unionn(arr1, arr2);
    for (int i = 0; i < uni.size(); i++)
        cout << uni[i] << " ";
}