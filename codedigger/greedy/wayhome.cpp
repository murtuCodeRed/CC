#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k;
	int m,n;
	string str;

	cin>>n>>m;
	cin>>str;

	int dist[n];
	fill(dist,dist+n,10000);

	dist[0]=0;
	for(i=0;i<n;i++)
	{
        //cout<<i<<" "<<dist[i];nl;
        if(str[i]=='1')
        {
            for(j=0;j<=m;j++)
            {
                if(i+j<n && str[i+j]=='1')
                    dist[i+j]=min(dist[i+j], dist[i]+1);
                    // dist[i+j]=dist[i]+1;
            }
        }
	}

	if(dist[n-1]==1e4)
        cout<<"-1";

    else
        cout<<dist[n-1];

	return 0;
}