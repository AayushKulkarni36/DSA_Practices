#include<bits/stdc++.h>
using namespace std;
/*void twoSum(vector<int>&arr,int target)
{int n=arr.size();
    vector<pair<int,int>>ans;
    int left=0;
    int right=n-1;
    while(left<right)
    {
        if(arr[left]+arr[right]<target)
        {
            left++;
        }
        else if(arr[left]+arr[right]>target)
        {
            right--;
        }
        else{
            ans.push_back({arr[left],arr[right]});
            
            left++;
            right--;
        }

    }
    for(auto it:ans)
    cout<<it.first<<","<<it.second<<endl;
}
*/
void twoSum(vector<int>&arr,int target){
    unordered_map<int,int>mpp;
    vector<pair<int,int>>ans;
    int n=arr.size();
  
    for(int i=0;i<n;i++)
    {
        int num=arr[i];
        int rem =target-num;
        if(mpp.find(rem)!=mpp.end())
        {
            ans.push_back({rem,arr[i]});
        }
        mpp[num]=i;
    }
      for(auto it:ans)
    cout<<it.first<<","<<it.second<<endl;

}
int main()
{
    vector<int>arr{1,2,3,4,5};
    twoSum(arr,6);
}