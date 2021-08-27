#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
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
    int n,m,i;
    cin>>n;

    for(i=1;;i++)
    {
        int x=n*i+1;
        if(!isPrime(x))
        {
            cout<<i<<endl;
            return 0;
        }
    }

}