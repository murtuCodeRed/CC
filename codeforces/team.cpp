#include <iostream>

using namespace std;

int main()
{
    int n,i,j,count=0;
    cin>>n;
    int arr[n][3];

    for(i=0;i<n;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
        cin>>arr[i][2];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i][0]==1 && arr[i][1]==1)
        {
            count++;
        }
        else if(arr[i][0]==1 && arr[i][2]==1)
        {
            count++;
        }
        else if(arr[i][2]==1 && arr[i][1]==1)
        {
            count++;
        }

    }
    cout<<endl<<count<<endl;

    return 0;
}