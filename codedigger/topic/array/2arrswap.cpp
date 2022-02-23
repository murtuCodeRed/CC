#include<bits/stdc++.h>
using namespace std;

void print(vector<int> a,int n)
{
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void solve()
{
    int n,k,i,j;
    cin>>n>>k;

    vector<int> a(n),b(n);

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<>()); 
    // print(a,n);
    // print(b,n);
    int suma=0,sumb=0;
    for(i=0;i<k;i++)
    {
        if(a[i]<b[i])
        {
            swap(a[i],b[i]);
        }
        else
        {
            break;
        }

    }

    for(i=0;i<n;i++)
    {
        suma+=a[i];

    }
    // print(a,n);
    // print(b,n);

    cout<<suma<<endl;
    

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