#include <bits/stdc++.h>
#define y cout<<"Yes"<<endl
#define n cout<<"No"<<endl
using namespace std;

void solve()
{
    int a,b,c,d;

    cin>>a>>b;
    cin>>c>>d;

    if((a==b && a!=d)||(c==d && c!=a))
    {
        n;
    }
    else if(a==d)
    {
        if(b+c!=a)
        {
            n;
            return;
        }
        else
        {
            y;
            return;
        }
    }
    else if(a==c)
    {
        if(b+d!=a)
        {
            n;
            return;
        }
        else
        {
            y;
            return;
        }
    }
    else if(b==c)
    {
        if(a+d!=b)
        {
            n;
            return;
        }
        else
        {
            y;
            return;
        }
    }
    else if(b==d)
    {
        if(a+c!=b)
        {
            n;
            return;
        }
        else
        {
            y;
            return;
        }
    }
    else
    {
        y;
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
}