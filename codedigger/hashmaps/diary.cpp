#include <bits/stdc++.h>
#define y cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;

int main()
{
    int n;
    cin>>n;

    map<string,int> mp;
    string str;
    while(n--)
    {
        cin>>str;
        mp[str]++;

        if(mp[str]>=2)
        {
            y
        }
        else
        {
            no
        }
    }

}