#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin>>n;

    vector<ll> a(n);

    ll i,res=0,neg=0,z=0;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            z++;
        }
        else if(a[i]>0)
        {
            res+= a[i]-1;
        }
        else
        {
            res+= abs(a[i])-1;
            neg++;
        }
    }

    if(neg%2!=0)
    {
        if(z)
        {
            res++;
            z--;
        }
        else
        {
            res+=2;
        }

    }
    res+=z;
    cout<<res<<endl;
}