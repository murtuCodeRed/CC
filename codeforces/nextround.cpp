#include <iostream>

using namespace std;

int main()
{
    int n,k,i;
    cin>>n>>k;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

int limit;
int count;
int ele=arr[k-1];


if(ele==0)
{
    limit=k-1;
    count=k;
}
else
{
    limit=n-1;
    count=n;
}

for(i=limit;i>=0;i--)
{
    if((arr[i]==0))
    {
        count--;
    }
    else if(arr[i]<ele)
    {
        count--;
    }
    else
    {
        break;
    }
}
cout<<endl<<count<<endl;
    return 0;
}