#include <bits/stdc++.h>
using namespace std;
/*void subarray(vector<int>&arr,int k)
{vector<int>ans;

    int Mlen=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                Mlen =max(Mlen,j-i+1);
            }

        }
    }
    cout<<Mlen;
}*/

void subarray(vector<int> &arr, int k)
{
    unordered_map<int, int> mpp;
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        int rem = sum - k;
        if (sum == k)
            cout << "K found between index 0 and " << i;
        else if (mpp.find(rem) != mpp.end())
        {
            cout << "\nK found between " << mpp[rem] + 1 << " and " << i;
        }
        if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }
    return;
}
int main()
{
    vector<int> arr{-10, 20, 30, -5};
    subarray(arr, 25);
}