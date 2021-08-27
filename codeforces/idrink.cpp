#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> s,int l,int h,int x)
{

    while(l<h)
    {
        int m=(l+h)/2;

        if(s[m]<=x)
        {
            l=m+1;
        }
        else
        {
            h=m;
        }
    }
    return l;
}

int main()
{
    int ns;
    cin>>ns;
    // int shop[ns];
    vector<int> s(ns);

    for(int i=0;i<ns;i++)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    int days,d;
    cin>>days;
    d=days;
    int low=0,high=ns,key;
    while(days--)
    {
        cin>>key;
        int res=solve(s,low,high,key);
        cout<<res<<endl;
    }
}