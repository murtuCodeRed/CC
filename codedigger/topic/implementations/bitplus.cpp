#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    int c=0;
    while(n--)
    {
        cin>>s;

        if( (s[0]=='X' && s[2]=='+') || (s[0]=='+' && s[2]=='X') )
        {
            c++;
        }
        else if( (s[0]=='X' && s[2]=='-') || (s[0]=='-' && s[2]=='X') )
        {
            c--;
        }
    }

    cout<<c<<endl;
}