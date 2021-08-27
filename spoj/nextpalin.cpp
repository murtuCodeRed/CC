#include <bits/stdc++.h>
using namespace std;


// void check(long int a[],int len)
// {
//     int i,j;
//     for(j=len-1;j>=0;j++)
//     {
//         int x=a[j];

//         if((a[j]==9) && j+1<0)
//         {
//             a[j]=0;
//             a[j+1]++;
//         }
//         else if((a[j]==9) && j+1>=0)
//         {
//             a[j]=0;
//             a[j+1]++;

//             if(a[j])
//         }
//     }
// }
void Pal(long int a[],int len)
{
    int i,j;

    for(i=0,j=len-1;i<len/2;i++,j--)
    {
        a[j]=a[i];
        if(i+1<j)
        {
            a[i+1]++;
        }
    }
}
int isPal(long int a[],int len)
{
    int i,j;

    for(i=0,j=len-1;i<len/2;i++,j--)
    {
        if(a[i]!=a[j])
        {
            return 0;
        }
    }
    return 1;
}
void print(long int a[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<a[i];
    }
    cout<<endl;

}
void rev(long int a[],int len)
{
    int i,j;
    for(i=0,j=len-1;i<len/2;i++,j--)
    {
        int t= a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
void solve()
{
    int n;
    cin>>n;
    long int a[1000005]={0};
    int i=0;
    while(n>=1)
    {
        int d=n%10;

        a[i]=d;
        i++;
        n=n/10;
    }
    rev(a,i);
    // check(a,i);
    int q=isPal(a,i);
    if(q==1)
    {
        ++a[i-1];
    }
    Pal(a,i);
    print(a,i);

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