#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;
    map<string,ll> mp;
    string s;
    ll a;
    while(n--)
    {
        cin>>s>>a;
        auto x=mp.find(s);
        if(x==mp.end())
        {
            mp[s]=a;
        }
        else
        {
            x->second+=a;
        }
    }
    // cout<<endl;
    // for(auto i:mp)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    multimap<ll, string, greater <ll> > mm;

    for (auto& it : mp) 
    {
        mm.insert({ it.second, it.first });
    }

    cout<<endl;
    ll res=0;
    for(auto i:mm)
    {
        // cout<<i.first<<" "<<i.second<<endl;
        if(k==0)
        {
            break;
        }
        res+=i.first;
        k--;
    }

    cout<<res<<endl;
    
}