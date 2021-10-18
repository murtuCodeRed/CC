#include<bits/stdc++.h>
using namespace std;
string out="";
bool check(string s)
{
    string y=s;
    reverse(s.begin(),s.end());
    if(y==s)
    {
        return true;
    }
    return false;
}

string sub(string s,int b,int e)
{
    string t="";
    for(int i=b;i<=e;i++)
    {
        t+=s[i];
    }
    return t;
}

string solve(string s)
{
    int l1=s.length()-2;
    int l2=s.length()-1;
    string x="",y="",ss=s;
    if(l1==1)
    {
        cout<<s<<"yo"<<endl;
        return s;
    }
    else if(check(s))
    {
        cout<<s<<"00"<<endl;
        return s;
    }
    // else if(l1==2 || !check(s))
    // {
    //     return s.substr(0,1);
    // }

    x=solve(sub(s,0,l1));
    y=solve(sub(ss,1,l2));

    cout<<x<<"\t"<<y<<endl;
    
    if(x.length()>y.length())
    {
        cout<<x<<"ji"<<endl;
        out=x;
    }
    else
    {
        out=y;
    }

    return "";
}


int main()
{
    string inp="babd";
    // cin>>inp;
    out=solve(inp);
    cout<<out<<endl;
}