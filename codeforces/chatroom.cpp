#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string h="hello";
    string s;
    cin>>s;
    int i,j,len=s.length();

    for(i=0,j=0;i<len && j<5;i++)
    {
        if(s[i]==h[j])
        {
            j++;
        }
    }

    if(j==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
