#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string sm,bg;

    cin>>sm;
    cin>>bg;
    cout<<endl;
    int fcs=0,i,j;

    if(sm.length()>bg.length())
    {
        sm.swap(bg);
    }

    for(i=0;i<bg.length();i++)
    {
        for(j=0;j<sm.length();j++)
        {
            int a=i,b=j;
            int len=0;
            while(a<bg.length() && b<sm.length() && sm[b++]==bg[a++])
            {
                len++;
            }
            fcs=max(len,fcs);
        }
    }

    cout<<(sm.length()+bg.length())-2*fcs<<endl;
    // cout<<sm<<fcs<<endl;
}



int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}