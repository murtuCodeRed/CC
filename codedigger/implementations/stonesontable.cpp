#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,i,c=0;
    string s;
    cin>>n>>s;

    for(i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            c++;
        }
    }
    cout<<c<<endl;
}