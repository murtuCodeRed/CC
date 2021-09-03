#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n,k=0,i;
    cin>>n;
    string s;
    cin>>s;

    if(n==1)
    {
        if(s[0]=='?')
        {
            cout<<'B'<<endl;
        }
        else
        {
            cout<<s[0]<<endl;
        }
        return;
    }

    while(k<=n-1)
    {
        if(s[k]=='R' || s[k]=='B')
        {
            break;
        }
        k++;
    }

    if(k==n && s[k-1]=='?')
    {
        int j=0;

        while(j<=n)
        {
            if(j%2==0)
            {
                s[j]='B';
            }
            else
            {
                s[j]='R';
            }
            j++;
        }
    }
    else
    {

        for(i=k-1;i>=0;i--)
        {
            if(s[i+1]=='R' && s[i]=='?')
            {
                s[i]='B';
            }
            else if(s[i+1]=='B' && s[i]=='?')
            {
                s[i]='R';
            }

        }
        for(i=k;i<=n-1;i++)
        {
            if(s[i-1]=='R' && s[i]=='?')
            {
                s[i]='B';
            }
            else if(s[i-1]=='B' && s[i]=='?')
            {
                s[i]='R';
            }

        }
    }

    cout<<s<<endl;
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