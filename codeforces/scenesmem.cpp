#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPrime(int num)
{
    int i;
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll len,i,j,n;
    string s;
    cin>>len;
    cin>>s;
    cout<<endl;
    for(i=0;i<len;i++)
    {
        // cout<<s[i]<<endl;
        if(s[i]-'0'!=2 && s[i]-'0'!=3 && s[i]-'0'!=5 && s[i]-'0'!=7)
        {
            cout<<"1"<<endl<<s[i];
            return;
        }
    }

    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            n=s[i]-'0';
            n*=10;
            n+=s[j]-'0';

            if(isPrime(n)==false)
            {
                cout<<"2"<<endl<<n;
                return;
            }
        } 
    }


}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();

    cout<<endl;
    }
}