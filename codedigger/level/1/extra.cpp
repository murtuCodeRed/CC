#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,r=0,l=0,flag=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>0)
        {
            r++;
        }
        else
        {
            l++;
        }
    }
    if(min(r,l)<=1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}