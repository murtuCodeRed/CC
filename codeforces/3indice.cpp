#include <bits/stdc++.h>
// #include <unordered_map>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
        {
            cout<<endl<<"YES";
            cout<<endl<<i<<" "<<i+1<<" "<<i+2<<endl;;
            return;
        }
    }
    cout<<endl<<"NO"<<endl;
    return;

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