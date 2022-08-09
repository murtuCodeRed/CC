#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    long long int i,j,ax[5001]={2,5,1,1,4},dp[5001],inp=-1,xn;
    vector<long long int> a;

    while(inp!=0)
    {
        cin>>inp;
        if(inp!=0)
            a.push_back(inp);
    }
    // a.pop_back();
    long long len= a.size();
    dp[a.size()]=1;
    dp[a.size()-1]=1;
    for(i=a.size()-2;i>=0;i--)
    {
        xn=a[i]*10+a[i+1];
        cout<<xn<<endl;
        if(xn<=26)
        {
            dp[i]=dp[i+1]+dp[i+2];
        }
        else
        {
            dp[i]=dp[i+1];
        }
    }
    // int len=5;
    // dp[len-1]=1;
    // dp[len]=1;
    // for(i=len-2;i>=0;i--)
    // {
    //     xn=(a[i]*10)+a[i+1];
    //     // cout<<xn<<endl;
    //     if(xn<=26)
    //     {
    //         dp[i]=dp[i+1]+dp[i+2];
    //     }
    //     else
    //     {
    //         dp[i]=dp[i+1];
    //     }
    // }
    cout<<dp[0];
}