#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    map<ll,ll> mp;

    ll n,i,x;
    cin>>n;


    for(i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
    }

    ll ct=0,f=0,fl=0,se=0,dif=0,tot=0;
    for(auto x:mp)
    {
        if(fl==0)
        {
            f=x.second;
            fl=1;
            continue;
        }
        
        se=x.second;
        // cout<<f<<" "<<se<<endl;
        if(se<f)
        {
            dif=f-se;
            ct+=dif;
        }
        else if(se>f)
        {
            dif=se-f;
            
            if(ct<dif)
            {
                ct=0;
            }
            else
            {
                ct=ct-dif;
            }
        }
        f=se;
        
    }

    if(se==0)
    {
        cout<<f<<endl;
    }
    else
    {
        cout<<se+ct<<endl;
    }


}