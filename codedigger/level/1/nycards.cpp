#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int cvow=0;
    cin>>str;
    int l = str.length()-1;

    for(int i=0;i<=l;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            cvow++;
        }
        else
        {
        //    cout<<str[i]-'0';
            int no=str[i]-'0';
            if(no<10 && no%2!=0)
                cvow++;
        }
    }
    cout<<cvow;
}