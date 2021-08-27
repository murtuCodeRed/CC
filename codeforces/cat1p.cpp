#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,i,j,len,k;
    cin>>n;

    if(n%2==0)
    {
        for(i=2,j=1;i<=n && j<=n;i+=2,j+=2)
        {
            cout<<i<<" "<<j<<" ";
        }
    }
    else
    {
        cout<<3<<" ";
        for(i=1,j=2;i<=n && j<=n;i+=2,j+=2)
        {
            if(i==3)
            {
                i+=2;
            }
            cout<<i<<" "<<j<<" ";
        }
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    cout<<endl;
    }
}