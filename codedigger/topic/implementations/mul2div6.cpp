#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(ll n)
{
    ll sum=0,num=n;

    while(n)
    {
        sum+=n%10;
        n=n/10;
    }

    if(sum%3==0 && num%2==0)
    {
        return true;
    }
    return false;
}

ll solve(ll n1,ll count)
{
    ll n2=n1*2;

    if(n1==1)
    {
        return count;
    }
    else if(check(n1))
    {
        // cout<<"q\t"<<n1/6<<endl;
        return solve(n1/6,++count);
        
    }
    else if(!check(n1) && check(n2))
    {
        // cout<<"w\t"<<n2<<endl;
        return solve(n2,++count);
    }
    else
    {
        return -1;
    }
}

int main()
{
    ll n,i,t,res;
    cin>>t;

    while(t--)
    {
        cin>>n;
        res=solve(n,0);
        cout<<res<<endl;
    }
    
}