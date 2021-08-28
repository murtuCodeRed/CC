#include<bits/stdc++.h>
using namespace std;

int check (int i,int j,int a[],int k)
{
    int nop=i-j+1;
    int nota=2;
    if(j-1==1)
    {
        nota=1;
    }
    if(a[i]==a[j])
    {
        return nota*k+2;
    }
    return nota*k;

}

int rec(int a[],int n,int k,int dp[])
{
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+k;

        for(int j=i-1;j-1>=1;j--)
        {
            dp[i]=min(dp[i],dp[j-1]+check(i,j,a,k));
        }
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
        cout<<dp[i]<<" ";
    
    return dp[n];

}

void solve()
{
    int n,k,i;
    cin>>n>>k;
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int dp[n+1]={0};
    dp[1]=k;
    int res=rec(a,n,k,dp);
    // cout<<res<<endl;
}

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}