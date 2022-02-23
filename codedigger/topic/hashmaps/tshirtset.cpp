#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll i,n,b,x,y,p[200005];
    set<ll> s[4];
    set<ll>::iterator it;
    s[1].insert(-1);    
    s[2].insert(-1);    
    s[3].insert(-1);    

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>x;
        s[x].insert(p[i]);
    }
    for(i=0;i<n;i++)
    {
        cin>>x;
        s[x].insert(p[i]);
    } 

    cin>>b;

    for(i=0;i<b;i++)
    {
        cin>>x;

        it=s[x].begin();
        it++;
        if(it==s[x].end())
        {
            cout<<-1<<" ";
        }
        else
        {
            y=*it;
            cout<<y<<" ";
        }
        s[1].erase(y);
        s[2].erase(y);
        s[3].erase(y);
    }    
    return 0;
}