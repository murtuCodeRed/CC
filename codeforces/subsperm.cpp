#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i,n,ans=0;
    cin>>n;
    string str,cp;
    cin>>str;
    cp=str;
    sort(str.begin(),str.end());

    for(i=0;i<n;i++)
    {
        if(str[i]!=cp[i])
        {
            ans++;
        }
    }
    cout<<ans<<endl;
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