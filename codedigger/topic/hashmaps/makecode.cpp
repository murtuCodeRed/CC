#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
void solve()
{
    ll n;
    cin>>n;
    ll y,ans=0;
    // set<ll> s;
    set<ll,greater<ll>> s;
    for(ll i=0;i<n;i++)
    {
        cin>>y;
        if(y % 2 == 0)
            {
                s.insert(y);
            }
    }
    cout<<endl;
        for(auto x:s)
        {
            ans++;
            if(x/2 % 2 == 0)
            {
                s.insert(x/2);
            }
        }
 
    cout<<endl<<ans<<endl;
 
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}