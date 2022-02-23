#include <bits/stdc++.h>
using namespace std;

int main()
{
    string le="I love it",he="I hate it",l="I love that ",h="I hate that ",t="";
    int n,c=0;
    cin>>n;

    while(n!=1)
    {
        if(c==0)
        {
            t+=h;
            c=1;
        }
        else
        {
            t+=l;
            c=0;
        }
        n--;
    }

    if(c==0)
    {
        t+=he;
    }
    else
    {
        t+=le;
    }
    cout<<t<<endl;
}