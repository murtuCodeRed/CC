#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll ans=-1e18;
    for(int i=0;i<5;i++){
        int aa,bb,cc,dd,ee;
        ee=(n-1+i)%n;
        dd=(n-2+i)%n;
        cc=(n-3+i)%n;
        bb=(n-4+i)%n;
        aa=(n-5+i)%n;
        ll val=a[aa]*a[bb]*a[cc]*a[dd]*a[ee];
        ans=max(ans,val);
    }
    cout<<ans<<"\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed;
    cout<<setprecision(10);
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}