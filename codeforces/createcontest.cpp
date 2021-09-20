#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n],i;
    ll res=1,l=0,f=0;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<n;i++)
    {
        if(a[i]<=2*a[i-1] && f==0)
        {
            f=1;
            l+=2;
            // cout<<"0;"<<a[i]<<endl;
        }
        else if(a[i]<=2*a[i-1] && f==1)
        {
            l++;
            // cout<<"1;"<<a[i]<<endl;
        }
        else
        {
            // res=max(res,l);
            l=0;
            f=0;
        }
        res=max(res,l);
    }

    cout<<res<<endl;
}