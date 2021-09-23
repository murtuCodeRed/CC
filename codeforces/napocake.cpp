#include <bits/stdc++.h>
using namespace std;

bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}

void solve()
{
    int n;
    cin>>n;
    int res[n+10]={0},i,id;
    int a[n+1];

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        id= i-a[i]+1;

        if(id>=1)
        {
            res[id]++;
            res[i+1]--;
        }
        else
        {
            res[1]++;
            res[i+1]--;
        }

    }

    cout<<endl;
    for(i=2;i<=n;i++)
    {
        res[i]=res[i]+res[i-1];
    }
        for(i=1;i<=n;i++)
    {
        if(res[i])
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
    }
    //     for(i=1;i<=n;i++)
    // {
    //     cout<<res[i]<<" ";
    // }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}