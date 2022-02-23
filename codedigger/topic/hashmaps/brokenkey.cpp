#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll i,j,len,n,flag=0;
    string s;

    cin>>len>>n>>s;

    char z;
    set<char> ss;
    map<char,int> mp;
    vector<ll> vstr;

    for(i=0;i<len;i++)
    {
        mp[s[i]]++;
    }

    for(i=0;i<n;i++)
    {
        cin>>z;
        if(mp.find(z)!=mp.end())
        {
            ss.insert(z);
        }
    }

    int coo=0;

    for(i=0,j=i+1;i<len && j<len-1;i++)
    {
        if(ss.find(s[i]) ==ss.end())
        {
            if(coo!=0)
            {
                vstr.push_back(coo);
                coo=0;
            }
            continue;
        }
        coo++;
    }
    if(coo!=0)
    {
        vstr.push_back(coo);
        coo=0;
    }
    ll cost=0,co;
    for(auto x:vstr)
    {
        // cout<<x<<endl;
        co=x*(1+x);
        co=co/2;
        cost+=co;
    }

    cout<<cost<<endl;

}