#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int l;
    cin>>l;
    int arr[l],i,x;
    vector <int> pos,neg;
    for(i=0;i<l;i++)
    {
        cin>>x;
        if(x<0)
        {
            neg.push_back(x);
        }
        else
        {
            pos.push_back(x);
        }
    }
    int pl=pos.size();
    int nl=neg.size();
    // cout<<pl<<nl;
    if(pl!=0)
    {
        sort(pos.begin(),pos.end(), greater<int>());
    }

    if(nl!=0)
    {
        sort(neg.begin(),neg.end());
    }


    // auto p=pos.end()-1;
    auto p=pos.begin();
    auto n=neg.begin();

    // while(p!=pos.end())
    // {
    //     cout<<*p<<" ";
    //     p++;
    // }
    // cout<<endl;
    // while(n!=neg.end())
    // {
    //     cout<<*n<<" ";
    //     n++;
    // }
    cout<<endl;
    int res=1,count=5,negate;
    for(i=1;i<=5;)
    {
        
        if(p!=pos.end() && n+1!=neg.end())
        {
            // cout<<*p<<" "<<*n<<" "<<*(n+1)<<endl;
            negate=(*n)*(*(n+1));
            if(negate>=*p)
            {
                res*=negate;
                n+=2;
                i=i+2;
            }
            else
            {
                res*=(*p);
                p++;
                i++;
            }
        }
        else if(p!=pos.end() && n!=neg.end() )
        {
            
            res*=(*p);
            p++;
            i++;
        }
        else if(n!=neg.end())
        {
            res*=(*n);
            n++;
            i++;
        }

        // cout<<res<<" "<<i<<endl;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       cout<<solve()<<endl;
    }
}