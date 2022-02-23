#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5],i,j,s=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    bool stop = false;
    for(i=0;i<5 && !stop;i++)
    {
        for(j=0;j<5 && !stop;j++)
        {
            if(a[i][j]==1)
            {
                stop=true;
            }
        }
    }

    // cout<<i<<" "<<j<<endl;

    if(i<3)
    {
        s+=3-i;
    }
    else
    {
        s+=i-3;
    }

    if(j<3)
    {
        s+=3-j;
    }
    else
    {
        s+=j-3;
    }

    cout<<s<<endl;
}