#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    ll i,l=s.length(),co=0;

    for(i=0;i<l;i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            co++;
        }
    }

    if(co==4 || co==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}