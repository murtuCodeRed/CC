#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int
void solve()
{
    ll i,n;
    cin>>n;
    ll a[n+1];

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    ll ans=0,prev,ad;
    for(i=1;i<=n;i++)
    {
   
        if(i==1)
        {
            ad=1;
        }
        else
        {
           if(a[i]>=prev)
            {
                ++ad;
            }
            else
            {
                ad=1;
            }
        }
        prev=a[i];
        ans+=ad;
    }

    cout<<ans<<endl;
}

int main()
{
    boost;
    ll t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}
