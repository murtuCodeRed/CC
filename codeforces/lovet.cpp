#include <bits/stdc++.h>
using namespace std;

void solve(int n,int ar[])
{
    int a,b,c;

    for(int i=1;i<n+1;i++)
    {
        a=i;
        b=ar[a];
        c=ar[b];

        if(a==ar[c])
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<n+1;i++)
    {
        cin>>a[i];
    }
    solve(n,a);
}