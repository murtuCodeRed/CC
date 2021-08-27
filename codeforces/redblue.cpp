#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i,r,b,j,b1=0,b2=0,r1=0,r2=0,k;
    cin>>r;
    int ar[r];
    for(i=0;i<r;i++)
    {
        cin>>ar[i];
    }


    cin>>b;
    int ab[b];

    for(i=0;i<b;i++)
    {
        cin>>ab[i];
    }

    for(i=0;i<r;i++)
    {
        b1+=ar[i];
        r1=max(r1,b1);
    }

    for(i=0;i<b;i++)
    {
        b2+=ab[i];
        r2=max(r2,b2);
    }
    k=r1+r2;
    int ans=max(0,k);
    cout<<endl<< ans<<endl;
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