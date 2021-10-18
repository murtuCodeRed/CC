

// void print(vector<int> a)
// {
//     for(int i=0;i<a.size();i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

// int solve()
// {
//     int n,x,i,q,res;
//     cin>>n>>x;

//     if(n==1)
//     {
//         cin>>q;
//         return n+q;
//     }
//     vector<int> a;

//     for(i=0;i<n;i++)
//     {
//         cin>>q;
//         a.push_back(q);
//     }

//     sort(a.begin(),a.end());
//     res=a[0]+x;
//     print(a);

//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==a[i+1] && i+1<n)
//         {
//             continue;
//         }
//         else if(a[i]<a[i+1] && i+1<n)
//         {
//             int dif=a[i+1]-a[i]-1;
//             // cout<<endl<<dif<<endl;
//             if(dif>x)
//             {
//                 return a[i];
//             }
//             else if(dif==a[i])
//             {
//                 return 
//             }
//             else
//             {
//                 x-=dif;
//             }
//         }
//     }
//     return res;
// }

#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxx=1e2+10;
int a[maxx];
int vis[maxx*maxx];
int n,x;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        scanf("%d%d",&n,&x);
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++) scanf("%d",&a[i]),vis[a[i]]=1;
        int ans=1;
        while(x)
        {
            while(vis[ans]) ans++;
            vis[ans]=1;
            x--;
        }
        while(vis[ans]) ans++;
        cout<<ans-1<<endl;
    }
}