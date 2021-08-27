#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> vect(n),tmp;
    for(int i=0;i<n;i++)
    {
        cin>>vect[i];
    }
    sort(vect.begin(),vect.end());

    int ele = vect[0];
    cout<<ele<<" ";
    for(int i=1;i<n;i++)
    {
        if(vect[i]!=ele)
        {
            ele=vect[i];
            cout<<vect[i]<<" ";
        }
        else
        {
            tmp.push_back(vect[i]);
        }
    }
    for (auto i = tmp.begin(); i != tmp.end(); ++i)
    {
        cout << *i << " ";
    } 
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

}