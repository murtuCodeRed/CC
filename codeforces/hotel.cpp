#include <bits/stdc++.h>

using namespace std;

int posl(int a[10],int n)
{
    int i;

    for(i=0;i<6;i++)
    {
        if(a[i]==0)
        {
            return i;
        }
    }
    return -1;
}
int posr(int a[10],int n)
{
    int i;

    for(i=9;i>=5;--i)
    {
        if(a[i]==0)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[10]={0};
    char ele;
    int num,p;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        if(ele=='L')
        {
            p=posl(arr,n);
            arr[p]=1;
        }
        else if(ele=='R')
        {
            p=posr(arr,n);
            arr[p]=1;
        }
        else
        {
            num=ele-'0';
            arr[num]=0;
        }
    }
    cout<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}