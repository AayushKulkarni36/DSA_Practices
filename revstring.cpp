    #include<bits/stdc++.h>
    using namespace std;
    bool palid(string s,int i)
    {
        int n=s.size();
        if (i>n/2) return true;
        if(s[i]!=s[n-i-1] )
        return false;
        return palid(s,i+1);

    }
    int main()
    {
        string s="Madam";
        transform(s.begin(),s.end(),s.begin(),::tolower);//convert to lowercase
        if(palid(s,0))
        cout<<"true";
        else
        cout<<"false";
    }