#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int no_ppl=1,gift,i;

    cin>>gift;

    while( (no_ppl*(no_ppl+1))/2  <= gift)
    {
        no_ppl++;
    }
    no_ppl--;
    cout<<no_ppl<<endl;

    for(i=1;i<no_ppl;i++)
    {
        cout<<i<<" ";
        gift=gift-i;
    }
    cout<<gift<<endl;
}