#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int res=0;
    int i,n;
    string a,b;
    cin>>n>>a>>b;

 for(i=0;i<n;i++)
    {
        if(a[i]==b[i]) continue;

        else
        {
            if(a[i+1]==b[i+1] && i+1<n)
                res++;
            else
            {
                if(a[i]!=a[i+1]){
                    swap(a[i],a[i+1]);
                    res++;
                }

                else
                    res++;
            }
        }
    }
    cout<<res<<endl;
}