#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[4],co=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        // cout<<endl;
    }
    int num;
    cin>>num;

    if(a[0]==1 || a[1]==1 ||  a[2]==1 || a[3]==1)
    {
        cout<<num<<endl;
        return 0;
    }
    else
    {
        for(int i=1;i<=num;i++)
        {
            if( (i%a[0]==0) || (i%a[1]==0) || (i%a[2]==0) || (i%a[3]==0) )
            {
                co++;
            }
        }
        cout<<co<<endl;
    }

    return 0;
}