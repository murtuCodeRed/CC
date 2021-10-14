#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    set<string> s;
    string a,b,t;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        t=a+'.'+b;
        s.insert(t);
    }

    // for(auto x:s)
    // {
    //     cout<<x;
    // }

    cout<<s.size()<<endl;
}