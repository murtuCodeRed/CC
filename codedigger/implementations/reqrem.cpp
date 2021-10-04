#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int x,y,n;
    cin>>x>>y>>n;

    int ans=n;
    int r=ans%x;
    int s;

    if(r<y)
    {
        s=r+x-y;
        ans-=s;
    }
    else if(r>y)
    {
        s=r-y;
        ans-=s;
    }

    cout<<ans<<endl;

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