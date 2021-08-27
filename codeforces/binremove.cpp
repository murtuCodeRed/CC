#include <bits/stdc++.h>
#define no "NO"
#define y "YES"
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int l= s.length();
    int f1=0,f2=0;
    int x;

    for(int i=l;i>0;i--)
    {
        if(s[i]=='0' && s[i-1]=='0')
        {
            f1=1;
            x=i-1;
            break;
        }
    }

    if(f1==0)
    {
        cout<<y<<endl;
        return;
    }

    for(int i=x;i>0;i--)
    {
        if(s[i]=='1' && s[i-1]=='1')
        {
            f2=1;
            break;
        }
    }

    if(f2==0)
    {
        cout<<y<<endl;
        return;
    }

    cout<<no<<endl;

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