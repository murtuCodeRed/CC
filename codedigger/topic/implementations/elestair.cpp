#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,t1,t2,t3;
    cin>>x>>y>>z>>t1>>t2>>t3;

    int st,ele;

    if(x>y)
    {
        st=(x-y)*t1;
    }
    else
    {
        st=(y-x)*t1;
    }

    int t4;
    if(x>z)
    {
        t4=(x-z)*t2+3*t3;
    }
    else
    {
        t4=(z-x)*t2+3*t3;
    }

    if(x>y)
    {
        ele=(x-y)*t2 +t4;
    }
    else
    {
        ele=(y-x)*t2 +t4;
    }

    // cout<<st<<" "<<ele;

    if(ele<=st)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}