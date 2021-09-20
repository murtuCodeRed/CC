#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin>>n;
    int di=n-2;
    int s=0;
    for(int i=1;i<=di;i++)
    {
        s+=(i+1)*(i+2);
    }
    cout<<s<<endl;
}