#include<bits/stdc++.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	// freopen("in.txt", "r", stdin);
    int n,flag=0,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<n-1;i++)
    {
        if(a[i-1]>= a[i] && a[i]<=a[i+1])
        {
            flag=1;
            break;
        }
    }
    
    if(flag==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}