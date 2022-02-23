#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    cin>>n>>m;

    map<string,string> mp;
    string a,b;

    string s;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        a='#'+a;
        b=b+';';
        mp[b]=a;
    }


    // for(auto k:mp)
    // {
    //     cout<<k.first<<" "<<k.second<<endl;
    // }

    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        auto x=mp.find(b);
        cout<<a<<" "<<b<<" "<<x->second<<endl;

    }
}