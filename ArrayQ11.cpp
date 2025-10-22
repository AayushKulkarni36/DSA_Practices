// Intersectionof 2Sorted arrays.
#include <bits/stdc++.h>
using namespace std;
// BRUTE
vector<int> intersection(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> ans;
    vector<int> visited(n2, 0);


    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j] && visited[j] == 0)
            {
                ans.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }
            if (arr2[j] > arr1[i])
                break;
        }
    }
    return ans;
}

/*
//optimal
vector<int> intersection(vector<int>arr1,vector<int>arr2)
{
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else
        {
            ans.push_back(arr1[i]);
            i++;j++;
        }

    }
    return ans;

}
    */
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> arr2 = {2, 2, 3, 4, 5, 6, 7};
    vector<int> ans = intersection(arr1, arr2);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}