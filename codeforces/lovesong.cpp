#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string str;
int len;

void ini(int dp[])
{
    dp[0]=0;
    int res=0;
    for(int i=0;i<len;i++)
    {
        res=str[i]-96;
        dp[i+1]=dp[i]+res;
    }
    cout<<endl;
}

void solve(int dp[])
{
    int l,r,res=0;
    cin>>l>>r;
    int x=dp[l-1],y=dp[r];
    cout<<y-x<<endl;
 
}
 
int main()
{
    int t;
    cin>>len>>t>>str;
    int dp[len]={0};
    ini(dp);
    while(t--)
    {
        solve(dp);
    }
}