#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,sum;
    cin>>n;

    if(n%2==0)
    {
        sum=n/2;
    }
    else
    {
        sum=(n-1)/2;
        sum+=-n;
    }
    cout<<sum<<endl;
}