#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int prod=m*n;
    int res;

    if((m*n)%2!=0)
    {
        prod--;
    }

    cout<<endl<<(m*n)/2<<endl;
}