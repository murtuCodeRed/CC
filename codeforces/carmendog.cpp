#include<bits/stdc++.h>
// #define for(i,n) for(i=0;i<10;i++)
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int i,j,c=0;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<n;i++)
    {
        if(a[i]+a[i-1]<k)
        {
            int x=k-a[i]-a[i-1];
            a[i]+=x;
            c+=x;
        }
    }
    cout<<c<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}