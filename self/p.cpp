#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;

    mp.insert(pair<string,int>("A",1));
    mp.insert(pair<string,int>("Hi",2));
    mp.insert(pair<string,int>("B",3));

    map<string,int>::iterator it=mp.begin();
    mp.erase(mp.begin(),mp.find("B"));
    while(it!=mp.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}