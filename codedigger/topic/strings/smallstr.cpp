#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s,t="";
        cin>>s;
        int n=s.length()-1,i,j;

        for(i=0;i<=n;i+=1)
        {
            if(i == 0)
            {
                t +=s[i];
            }
            else if(s[i] == s[i-1])
            {
                t +=s[i];
                i++;
            }
        }
        t+=s[n];
        cout<<t<<endl;
    }

}
