#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int a,b,n;
    cin>>a>>b>>n;
    int m=max(a,b);
    int s=0;
    int c=0;
    while(s<=n)
    {
        s=a+b;
        if(a<b)
        {
            a=s;
        }
        else
        {
            b=s;
        }
        c++;
    }

    cout<<c<<endl;

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