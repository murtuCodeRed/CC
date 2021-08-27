#include <bits/stdc++.h>
using namespace std;
#define N 510
char arr[N][N];
int main()
{
    int m,n,i,j;
    cin>>m>>n;

    for(i=1;i<N;i++)
    {
        for(j=1;j<N;j++)
        {
            arr[i][j]='.';
        }
    }

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[i][j]=='S' && (arr[i+1][j]=='W' || arr[i][j+1]=='W' || arr[i-1][j]=='W' || arr[i][j-1]=='W'))
            {
                cout<<"No"<<endl;
                return 0;
            }

            if(arr[i][j]=='S')
            {
                if(arr[i+1][j]=='.')
                {
                    arr[i+1][j]='D';
                }
                if(arr[i-1][j]=='.')
                {
                    arr[i-1][j]='D';
                }
                if(arr[i][j+1]=='.')
                {
                    arr[i][j+1]='D';
                }
                if(arr[i][j-1]=='.')
                {
                    arr[i][j-1]='D';
                }

            }
        }
    }

        cout<<"Yes"<<endl;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }

    return 0;
    
    

}