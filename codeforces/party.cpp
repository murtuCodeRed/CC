
#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
	map<int, list<int>> adj;
	void addEdge(int v, int w);
    void solve(int u,int par,int dp[]);
};

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void Graph::solve(int u,int par,int dp[])
{
    dp[u]=1;
    int mx=0;

    for(int child: adj[u])
    {
        if(child==par)
        {
            continue;
        }
        else
        {
            solve(child,u,dp);
            mx=max(mx,dp[child]);
        }

    }
    dp[u]+=mx;
}

// Driver code
int main()
{
	Graph g;
    int n,x;
    cin>>n;
    int arr[n+1];

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        x= arr[i];

        if(x==-1)
        {
            g.addEdge(0,i);
        }
        else
        {
            g.addEdge(x,i);
        }
    }

    int dp[n+1];
    g.solve(0,0,dp);
    cout<<dp[0]-1<<endl;

    // for(int i=0;i<=n;i++)
    // {
    // cout<<dp[i]<<" ";
    // }
    // cout<<endl;
	return 0;
}
