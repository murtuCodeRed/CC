#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,i,t;
    string s;
    char te;
    cin>>n>>t>>s;

    while(t--)
    {
        for(i=0;i<n-1;i++)
        {
            
            if(s[i]=='B' && s[i+1]=='G' )
            {
                // cout<<i<<endl;
                te=s[i];
                s[i]=s[i+1];
                s[i+1]=te;
                i++;
            }
        }
    }
    cout<<s<<endl;
}