#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,c,i;
    cin>>n>>c;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    // cout<<"------"<<endl;
    long long int low,high,mid,cocheck,gap,leftc,best;

    low=0;
    high=a[n-1];
    best=0;
    while(low<=high)
    {
        mid=(low+high+1)/2;
        int cocheck=1;
        leftc=0;

        for(int i=1;i<n && cocheck < c;i++)
        {
            if(a[i]-a[leftc]>=mid)
            {
                leftc=i;
                cocheck++;
            }
        }

        if(cocheck>=c)
        {
            best=mid;
            low = mid +1;
        }
        else
        {
            high=mid-1;
        }
    }

    cout<<best<<endl;
}



int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}