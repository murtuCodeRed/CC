#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost ios::sync_with_stdio(false); cin.tie(0)
int main()
{
    boost;
    ll n,i;
    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ll f1=0,f2=0;
    if(n%2!=0)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                f1++;
            }
            else
            {
                f2++;
            }
        }
    }
    if(f1==n || f2==n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    // cout<<"Hi M";
    f1=0,f2=0;
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                f1++;
            }
            else
            {
                f2++;
            }
        }
        if(f1%2!=0 || f2%2!=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    ll co=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]%2!=0)
        {
            a[i]++;
            a[i+1]++;
            co++;
        }
    }
    cout<<co*2<<endl;

    return 0;


}