#include <bits/stdc++.h>
using namespace std;

int c(int n,int val,int a[])
{
    if(val==0)
    {
        return 1;
    }
    // if(val<0)
    // {
    //     return 0;
    // }
    if(val-a[n-1]<0)
    {
        return c(n-1,val,a);
    }
    if(n<=0 && val>=1)
    {
        return 0;
    }

    return c(n-1,val,a) + c(n,val-a[n-1],a);
}
int main()
{
    int i,val,n;
    cin>>val>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=c(n,val,arr);
    cout<<res<<endl;
    return 0;
}