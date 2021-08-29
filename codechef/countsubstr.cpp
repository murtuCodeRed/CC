#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)


void solve()
{
    long long int len;
    cin>>len;
    string s;
    cin>>s;
    long long int co=0,k=1;
    for(long long int i=0;i<len;i++)
    {
        if(s[i]=='1')
        {
            co=co+k;
            k++;
        }
    }

    cout<<co<<endl;
}

int main()
{
    boost;
    long long int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}
