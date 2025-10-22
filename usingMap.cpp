#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    //precompute
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
            int maxfreq=INT_MIN;
            int maxEle;
            int minfreq=INT_MAX;
            int minEle;           
    
        for(auto it :mpp){
            cout<<it.first<<"->"<<it.second<<endl;
            if(it.second>maxfreq) 
            {
                maxfreq=it.second;
                maxEle=it.first;
            }
             if(it.second<minfreq) 
            {
                minfreq=it.second;
                minEle=it.first;
            }
        }
        cout<<"\nmax Element:"<<maxEle<<"\nFreq: "<<maxfreq;
        cout<<"\nmin Element:"<<minEle<<"\nFreq: "<<minfreq;
            int q;
            cin>>q;
        while(q--)
        {
            int num;
            cin>>num;
            
            
            //cout<<mpp[num]<<endl;

        }
    

}