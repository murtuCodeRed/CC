#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;

    ll siz=n-1,i;
    ll a[n+1];

    a[0]=1;
    for(i=1;i<n;i++)
    {
        if(i%2!=0)
        {
            a[i]=a[i-1]+siz;
        }
        else
        {
            a[i]=a[i-1]-siz;
        }
        siz--;
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}