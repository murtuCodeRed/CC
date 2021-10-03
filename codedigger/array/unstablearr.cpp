#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,sum;
    cin>>n>>sum;

    if(n==1)
    {
        cout<<0<<endl;
    }
    else if(n==2)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<sum*2<<endl;
    }

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