#include<bits/stdc++.h>
using namespace std;

bool prime(int num)
{
    int i,f;

    if(num==1)
    {
        return false;
    }

    
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<endl;
        for(int i=a;i<=b;i++)
        {
            if(prime(i))
            {
                cout<<i<<endl;
            }
        }
    }

}
