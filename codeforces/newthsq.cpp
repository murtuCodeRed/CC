#include <bits/stdc++.h>
using namespace std;


int solve()
{
    int n,m,x,y;
    int i,j,sum=0;
    cin>>n>>m>>x>>y;
    char a[n+2][m+2]={'*'};


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

            if(a[i][j]=='.' && j+1<m && a[i][j+1]=='.')
            {
                sum=sum+min(x+x,y);
                j++;
            }
            else if(a[i][j]=='.')
            {
                sum+=x;
            }
        }
    }

    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int res=solve();
       cout<<res<<endl;

    }
}