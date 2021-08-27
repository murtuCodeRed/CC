#include <bits/stdc++.h>
using namespace std;


// int c(int n,int val,int a[],int dp[255][255])
int c(int n,int val,int a[],vector<vector<int> > &dp)
{

    if(n==0)
    {
        return 0;
    }
    // if(val<0)
    // {
    //     return 0;
    // }
    // if(n<=0 && val>=1)
    // {
    //     return 0;
    // }


    if(val==0)
    {
        return dp[n][val]=1;
    }
    if(dp[n][val]!=-1)
    {
        return dp[n][val];
    }

    if(a[n-1]<=val)
    {
        return dp[n][val]=c(n-1,val,a,dp) + c(n,val-a[n-1],a,dp);
    }
    else
    {
        return dp[n][val]=c(n-1,val,a,dp);
    }
}

int main()
{
    int i,j,val,n;
    cin>>val>>n;
    int a[n];
    // int dp[255][255];
    vector<vector<int> > dp(n + 1,vector<int>(val + 1, -1));
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // for(i=0;i<n+1;i++)
    // {
    //     for(j=0;i<val+1;j++)
    //     {
    //         dp[i][j]=-1;
    //     }
    // }


    int res = c(n, val, a, dp);
    cout<<res<<endl;
}
