#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s,ss;
    cin>>s;
    int len=s.length();
    ss=s;
    char c,d;
    c=s[0];
    if(islower(c))
    {
        d=toupper(c);
        s[0]=d;
    }
    else if(isupper(c))
    {
        d=tolower(c);
        s[0]=d;
    }
    for(int i=1;i<len;i++)
    {
        c=s[i];
        if(isupper(c))
        {
            d=tolower(c);
            s[i]=d;
        }

        if(islower(c))
        {
            cout<<ss<<endl;
            return 0;
        }
    }
    cout<<s<<endl;
}