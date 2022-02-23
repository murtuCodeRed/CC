#include<bits/stdc++.h>
using namespace std;

bool odd(int x)
{
    if(x%2!=0)
    {
        return true;
    }
    return false;
}

void solve()
{
    int n;
    cin>>n;
    int a[n],i,x=0,y=0;


    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if( (odd(i) && !odd(a[i])) )
        {
            ++x;
        }
        else if( (!odd(i) && odd(a[i])) )
        {
            ++y;
        }
        else
        {
            continue;
        }
    }

    if(x==y)
    {
        cout<<y<<endl;
    }
    else
    {
        cout<<-1<<endl;
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