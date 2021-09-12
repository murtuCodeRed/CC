#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>> t;
    while(t--){
        int zeroes = 0;
        int n;
        cin>>n;
        int c=5;
        while((n/c)>0){
            zeroes += n/c;
            c *=5;

        }
        cout<<zeroes<<endl;
    }
}

