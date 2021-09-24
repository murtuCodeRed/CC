#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str="hello hi hi yo yo yo hoh hoh ho hoh";
    int l=str.length();
    int i;

    map<string,int> mp;
    string t="";
    for(i=l-1;i>=0;i--)
    {
        if(str[i]!=' ')
        {
            t+=str[i];
        }
        else
        {
            mp[t]++;

            if(mp[t]==2)
            {
                reverse(t.begin(),t.end());
                cout<<t<<endl;
            }
            t="";
        }
    }
}