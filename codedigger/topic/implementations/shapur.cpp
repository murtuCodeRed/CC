#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c="";
    cin>>a>>b;

    int l=a.length(),i;

    for(i=0;i<l;i++)
    {
        if(a[i]==b[i])
        {
            c+='0';
        }
        else
        {
            c+='1';
        }
    }

    cout<<c<<endl;
}