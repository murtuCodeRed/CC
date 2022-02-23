#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,string> mp;
    mp["red"]="Reality";
    mp["green"]="Time";
    mp["purple"]="Power";
    mp["blue"]="Space";
    mp["orange"]="Soul";
    mp["yellow"]="Mind";

    int n;
    cin>>n;
    cout<<6-n<<endl;
    string str;
    while(n--)
    {
        cin>>str;
        mp.erase(str);
    }

    for(auto i:mp)
    {
        cout<<i.second<<endl;
    }
}