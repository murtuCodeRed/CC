#include<bits/stdc++.h>
using namespace std;

int solve()
{
    string s;
    cin>>s;
    int len=s.length();
    int co=0,i;

    for(i=1;i<len;)
    {
        if(s[i]=='x' && s[i-1]=='y')
        {
            co++;
            i+=2;
        }
        else if(s[i]=='y' && s[i-1]=='x')
        {
            co++;
            i+=2;
        }
        else
        {
            i++;
        }
    }
    return co;
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int res=solve();
        cout<<res<<endl;
    }
}