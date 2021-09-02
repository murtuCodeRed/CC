#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int

int dfs(ll arr[10][10],ll n,ll i,ll j,ll dp)
{
    
}

void solve()
{
    ll i,j,n;
    cin>>n;
    ll arr[n][n]={0};
    ll x,y;
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        arr[x][y]=1;
        arr[y][x]=1;
    }
    ll dp[n]={0},co=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                arr[i][j]=-1;
            }
        }
    }
    int res = dfs(arr,n,0,0,dp);



}

int main()
{
    boost;
    ll t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}