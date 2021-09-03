#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    int cz=0,co=0,res;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            co++;
        }
        else
        {
            cz++;
        }
    }
    // cout<<co<<cz<<endl;
    if(co==0 || cz==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    int n,a,b,res,i,grps=0,x,g,max=0,f;
    cin>>n>>a>>b;
    string s;
    cin>>s;


    if(check(s))
    {
        res=a*n+b;
        cout<<res<<endl;
        return;
    }

    while(!check(s))
    {
        for(i=0;i<n;i++)
        {
            if(s[i]=='0' && i+1<n && s[i+1]=='1')
            {
                grps++;
                x=i+1;
                g=x;
                while(x<n)
                {
                    if(x=='1')
                    {
                        break;
                    }
                    x++;
                }
                f=x-g;
                max+=g*a+b;
                
                while (x+1<n)
                {
                    s[x]=s[x+1];
                    x++;
                }
                // n=x;
                s=s.substr(0,x);
                
            }
            else if(s[i]=='1' && i+1<n && s[i+1]=='0')
            {
                grps++;
                x=i+1;
                g=x;
                while(x<n)
                {
                    if(x=='1')
                    {
                        break;
                    }
                    x++;
                }
                f=x-g;
                max+=g*a+b;
                
                while (x+1<n)
                {
                    s[x]=s[x+1];
                    x++;
                }
                // n=x;
                s=s.substr(0,x);
            }
        }
    }

    if(check(s))
    {
        max+=a*n+b;
        cout<<res<<endl;
        return;
    }

    // cout<<grps<<endl;
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

