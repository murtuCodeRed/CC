#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    map<string,ll> mp;

    ll n,i;
    string x;
    cin>>n;


    for(i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;

        if(mp[x]==1)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<x+to_string(mp[x]-1)<<endl;
        }
    }
}