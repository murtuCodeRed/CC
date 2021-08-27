#include <bits/stdc++.h>
using namespace std;

int val[]={200,100,120};
int wt[]={10,20,30};

// item can picked 0 or 1 times
// wt cannot exceed W that is bag limit

int knap(int n,int W)
{
    if(n==0||W==0)
    {
        // return 0;
        return 1;
    }

    if(wt[n-1]>W)
    {
        return knap(n-1,W);
    }
    // return max(knap(n-1,W),val[n-1]+knap(n-1,W-wt[n-1]));
    return knap(n-1,W)+knap(n-1,W-wt[n-1]);
    
}


int main()
{
    int n= sizeof(val)/sizeof(val[0]);
    int W;
    cin>>W;      
    int res = knap(n,W);
    // cout<<res<<endl;
    cout<<res-1<<endl;
    return 0;
}