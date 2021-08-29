#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int

int main()
{
    ll n,p,k,x;
    cin>>n>>k>>p;
    vector<pair<int,int>> a;
    for(ll i=1;i<=n;i++)
    {
        cin>>x;
        a.push_back({x,i});
    }
    sort(a.begin(),a.end());
    ll dp[n+1],m=1;
    dp[a[0].second]=1;

    for(ll i=1;i<=n;i++)
    {
        if(a[i].first - a[i-1].first <=k)
        {
            dp[a[i].second]=m;
        }
        else
        {
            m++;
            dp[a[i].second]=m;
        }
    }
	// dp[a[0].second] = m;
	// for (int i = 1; i < n; i++)
	// {
	// 	if (a[i].first <= a[i - 1].first + k)
	// 		dp[a[i].second] = m;
	// 	else
	// 	{
	// 		m++;
	// 		dp[a[i].second] = m;
	// 	}
	// }

    for(int i=1;i<=n;i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    
    while(p--)
    {
        ll p1,p2;
        cin>>p1>>p2;
        if(dp[p1]==dp[p2])
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }


}