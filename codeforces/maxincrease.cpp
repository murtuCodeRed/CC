#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin>>n;

    int a[n];

    int i,res=1,c=0,f=0;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<n;i++)
    {
        if(a[i-1]<a[i] && f==0)
        {
            c+=2;
            f=1;
        }
        else if(a[i-1]<a[i] && f==1)
        {
            c++;
        }
        else
        {
            res=max(res,c);
            c=0;
            f=0;
        }
    }
    res=max(res,c);
    cout<<res<<endl;
}