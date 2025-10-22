#include<bits/stdc++.h>
using namespace std;
int findsslargest(vector<int>&arr)
{int secondlargest=INT_MIN;
    int largest = arr[0];
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && secondlargest<arr[i])
            secondlargest=arr[i];
    }
    return secondlargest;
}
int findssmallest(vector<int>&arr)
{int secondsmallest=INT_MAX;
    int smallest = arr[0];
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]<smallest)
        {
            secondsmallest=smallest;
            smallest = arr[i];
        }
        else if(arr[i]>smallest && secondsmallest>arr[i])
            secondsmallest=arr[i];  
    }
    return secondsmallest;
}
int main()
{vector<int> arr={1,2,3,4,5,6,7};
    int sslargest=findsslargest(arr);
    int ssmallest=findssmallest(arr);
    cout<<sslargest<<endl;
    cout<<ssmallest<<endl;
}