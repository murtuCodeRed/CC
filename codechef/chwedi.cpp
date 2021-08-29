// not working
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int> mp;

    for(i=0;i<n;i++)
    {
        if(mp.find(a[i])==mp.end())
        {
            mp.insert(make_pair(a[i],1));
        }
        else
        {
            mp[a[i]]++;
        }
    }
    int x=0,y=0;
    for(auto i:mp)
    {
        // cout<<i.first<<" "<<i.second<<endl;
        if(i.second>1)
        {
            x+=i.second;
            y=max(y,i.second);
        }
    }
    int z= min(x+k,y*k);
    cout<<endl<<z<<endl;
}

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}