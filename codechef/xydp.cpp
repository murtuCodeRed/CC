// not working
#include<bits/stdc++.h>
using namespace std;

int co=0;
int rec(string s,int n)
{

    if(n==0)
    {
        return co;
    }

    if(s.length()==2 )
    {

        if(s.compare("yx")==0) 
        {
            
            co++;
        }
        else if( s.compare("xy")==0 )
        {
            co++;
        }
        string s1=s.substr(0,n-2);
        return rec(s1,n-2);
    }

    // string s1=s.substr(0,n-2);
    string s2=s.substr(0,n-1);

    return rec(s2,n-1);
}

void solve()
{
    string str;
    cin>>str;
    int len=str.length();
    int res=rec(str,len);
    cout<<res<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}