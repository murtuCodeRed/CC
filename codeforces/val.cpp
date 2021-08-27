#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int x;
    unordered_map <int,int> mp;
    bool ans=false;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;

        if(mp[x]>1)
        {
            ans=true;
        }
    }
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}



int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    cout<<endl;
}