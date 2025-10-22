//Return the size of of array of unique elements only
#include<bits/stdc++.h>
using namespace std;

/*int removeDuplicates(vector<int>& arr)
{
    set<int>st;
    for(int i=1;i<arr.size();i++)
    {
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it:st)
    {   index++;
        cout<<it<<" ";
    }
    return index;
}
*/


int removeDuplicates(vector<int>& arr)
{
    int i=0;
    vector<int>v={arr[i]};
    for(int j=0;j<arr.size();j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
            v.push_back(arr[i]);
        }
    }
    for(auto it:v)
        cout<<it<<" ";
    return i+1;
}



int main()
{
    vector<int>arr={1,1,2,2,4,4,5};
    int size=removeDuplicates(arr);
    cout<<endl<<size;


    
}