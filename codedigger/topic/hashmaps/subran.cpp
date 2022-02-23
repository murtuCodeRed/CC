#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int i,tar,c=0,arr[n];
    map<int,int> mp;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]=i;
    }


    for(i=0;i<n;i++)
    {

        tar=arr[i]+k;
        
        auto x=mp.find(tar);

        if(x!=mp.end())
        {
            c++;
        }
    }
    cout<<c<<endl;
}