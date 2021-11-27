#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll n,i,moves=0;
        cin>>n;

        for(;;)
        {
            if(n==1)
            {
                cout<<moves<<endl;
                break;
            }
            else if(n%2==0)
            {
                moves++;
                n=n/2;
            }
            else if(n%3==0)
            {
                moves++;
                n=(2*n)/3;
            }
            else if(n%5==0)
            {
                moves++;
                n=(4*n)/5;
            }
            else
            {
                cout<<-1<<endl;
                break;
            }
        }
    }
}