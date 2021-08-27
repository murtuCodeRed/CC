#include <bits/stdc++.h>
using namespace std;

void print_solution(__int128 n) {
    string S;
    while (n != 0) {
        int digit = n%10;
        n /= 10;
        S+=to_string(digit);
    }
    reverse(S.begin(), S.end());
    cout << S << endl;
}

int main()
{
    int x,y;
    cin>>x>>y;
    int n;
    cin>>n;
    __int128 a[n+2],A,B;
    A = x; 
    B = y;
    a[0]=A;
    a[1]=B;

    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-2]+a[i-1]*a[i-1];
    }
    print_solution(a[n-1]);
}
