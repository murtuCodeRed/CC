#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    unordered_map<string,int> mp;
    mp["one"]=1;       
    mp["two"]=2;
    mp["three"]=3; 
    mp["four"]=4; 
    mp["five"]=5; 
    mp["six"]=6;  
    mp["seven"]=7; 
    mp["eight"]=8; 
    mp["nine"]=9; 

    for(int i=0,j=0;i<str.length() && j<str.length();i++)
    {
        for(auto x:mp)
        {
            strcmp(str,x.first)
        }
    }
}