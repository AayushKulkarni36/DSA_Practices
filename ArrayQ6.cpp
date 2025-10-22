#include <bits/stdc++.h>
using namespace std;

/* void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int n=nums.size();
         k=k%n;

        for(int i=0;i<k;i++)
            temp.push_back(nums[i]);
        for(int i=k;i<n;i++)
            nums[i-k]=nums[i];

        for(int i=0;i<k;i++)
        {
           nums[n-k+i]=temp[i];
        }
    }
        */

void reverses(vector<int> &nums, int left, int right)
{
    while (left <= right)
    {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left++;
        right--;
    }
}
void rotate(vector<int> &nums, int k)
{
    reverses(nums, 0, k - 1);
    reverses(nums, k, nums.size() - 1);
    reverses(nums, 0, nums.size() - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k;
    cin >> k;
    rotate(arr, k);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}