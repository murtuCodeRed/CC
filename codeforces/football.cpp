#include <bits/stdc++.h>
using namespace std;
#define y cout<<"YES"<<endl
#define n cout<<"NO"<<endl

int main()
{
    string s;
    cin>>s;
    int len=s.length(),ct=0;

    if(len<7 || len==1)
    {
        n;
        return 0;
    }
    for(int i=1;i<len;i++)
    {
    //    cout<<ct<<" ";
        if(s[i]==s[i-1] && ct==0)
        {
            ct+=2;
        }
        else if (s[i]==s[i-1])
        {
            ct++;
        }
        else
        {
            ct=0;
        }
        if(ct==7)
        {
            y;
            return 0;
        }
    }
    n;
}