#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll i,n,b,x;
    vector<ll> p,fr,bk,fav;
    map<ll,vector<ll>> mp;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>x;
        p.push_back(x);
    }
    for(i=0;i<n;i++)
    {
        cin>>x;
        fr.push_back(x);
    }
    for(i=0;i<n;i++)
    {
        cin>>x;
        bk.push_back(x);
    }    


    cin>>b;

    for(i=0;i<b;i++)
    {
        cin>>x;
        fav.push_back(x);
    }    


    // ll bestp=-1,besti=0;

    reverse(fav.begin(),fav.end());

    ll aa,bb,cc;
    for(i=0;i<n;i++)
    {
        aa=p.back();
        p.pop_back();
        bb=fr.back();
        fr.pop_back();
        cc=bk.back();
        bk.pop_back();
        mp[aa].push_back(bb);
        mp[aa].push_back(cc);
    }    

    for(auto k=mp.begin();k!=mp.end();)
    {
        ll & a1=mp[k->first].at(0);
        ll & a2=mp[k->first].at(1);
        // cout<<endl<<a1<<" "<<a2<<endl;
        if(a1==fav.back())
        {
            cout<<k->first<<" ";
            fav.pop_back();
            mp.erase(k->first);
            k=mp.begin();
        }
        else if(a2==fav.back())
        {
            cout<<k->first<<" ";
            fav.pop_back();
            mp.erase(k->first);
            k=mp.begin();
        }
        else
        {
            k++;
            continue;
        }
    }

    ll as=b-n;

    while(as)
    {
        cout<<-1<<" ";
        as--;
    }

    cout<<endl;
}