#include <bits/stdc++.h>
using namespace std;
/*
vector<int> fndDupli(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> mpp;             tc = 
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    vector<int>dupli;
    for (auto it : mpp)
    {
        if (it.second >1)
            dupli.push_back(it.first);
    }
    return dupli;
}
*/
/*
vector<int> fndDupli(vector<int> &arr)           // o(n*n)  (n)
{
    int n = arr.size();
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                cnt++;
        }
        if (cnt > 1)
        {
            st.insert(arr[i]);
        }
    }

    vector<int> dupli;
    int ind = 0;
    for (auto it : st)
    {
       dupli.push_back(it);
    }
    return dupli;
}
*/

vector<int> fndDupli(vector<int> &arr)           
{
    int n = arr.size();
    sort(arr.begin(),arr.end());

    vector<int>v;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            if(v.empty()|| v.back()!=arr[i])
                v.push_back(arr[i]);
        }
    }
    return v;
}

int main()
{
    vector<int> arr = {2, 3, 1, 2, 3};
    vector<int> dup = fndDupli(arr);
    for (auto it : dup)
        cout << it << " ";
}