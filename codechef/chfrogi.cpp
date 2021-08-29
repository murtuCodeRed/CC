#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int

void print(ll mat[1000][1000],ll len)
{
    ll i,j;
    for(i=1;i<=len;i++)
    {
        for(j=1;j<=len;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

void solve(ll n,ll k,ll a[],ll mat[1000][1000])
{
    ll second,first,i,j=0,m;
    cin>>first>>second;

    while(j<=n)
    {
        if(mat[first][second]<=k)
        {
            cout<<"Yes"<<endl;
            return;
        }
        
        for(i=1;i<=n;i++)
        {
            int f=0;
            if(mat[first][i]<=k && mat[first][i]!=0)
            {
                first=i;
                // cout<<first<<endl;
            }
        }
        j++;
    }
    cout<<"No"<<endl;
    return; 
}

int main()
{
    boost;
    ll n,k,p,i,j,c,d;
    cin>>n>>k>>p;
    ll a[n+1];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll mat[1000][1000];
    cout<<endl;
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || mat[i][j]!=0)
            {
                ;
            }
            else
            {
                c=a[i];d=a[j];

                if(c>d)
                {
                    mat[i][j]=c-d;
                    mat[j][i]=c-d;
                }
                else
                {
                    mat[i][j]=d-c;
                    mat[j][i]=d-c;
                }
            }
            
        }
    }
    // print(mat,n);


    while(p--)
    {
        // print(mat,n);
        // cout<<endl;
        solve(n,k,a,mat);
    }
   return 0;
}