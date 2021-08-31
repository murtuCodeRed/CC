#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)


void solve()
{
    int n,k,i;
    cin>>n>>k;
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int dp[n+1];
    dp[0]=0;

    for(i=1;i<=n;i++)
    {
        int clash=0 ;
        map <int, int> mp;
        dp[i]=dp[i-1]+k;

        for(int j=i;j>=1;j--)
        {
            mp[a[j]]++;
            if (mp[a[j]] == 2)
            {
                clash += 2;
            }
            else if (mp[a[j]] > 2)
            {
                clash += 1;
            }

            dp[i]=min(dp[i],dp[j-1]+k+clash);
        }
    }   
    // cout<<dp[n]<<endl;

    for(i=1;i<=n;i++)
    {
        cout<<dp[i]<<" ";
    }
}

int main()
{
    boost;
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}
