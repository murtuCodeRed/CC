#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size(),co=0;
        for(int i=0; i<n; i++)
            if(s[i]=='9')    
                co++;
        if(n==co)
        {
            string ans = "1";
            for(int i=0; i<n-1; i++)
                ans += "0";
            ans += "1";
            cout<<ans<<endl;
            continue;
        }
        int i;
        bool check = false,check2 = false;
        for(i=0; i<(n-1)/2; i++)
        {
            if(s[i]>s[n-i-1])
            {
                s[n-i-1] = s[i];
                check = false;
                check2 = true;
            }
            else if(s[i]<s[n-i-1])
            {
                s[n-i-1] = s[i];
                check = true;
            }
        }
        if(i==0 || (check && (s[i]!='9' || (s[i]=='9' && s[n-i-1]!='9'))))
        {
            if(s[i]>s[n-i-1])
                s[n-i-1] = s[i];
            else
            {
                s[i] = s[i]+1;
                s[n-i-1] = s[i];
            }
        }
        else if(check || !check2)
        {
            while(i>=0)
            {
                if(s[i]=='9')
                {
                    s[i] = '0';
                    s[n-i-1] = '0';
                }
                else
                {
                    s[i] = s[i]+1;
                    s[n-i-1] = s[i];
                    break;
                }
                i--;
            }
        }
        else
        {
            if(s[i]>s[n-i-1])
                s[n-i-1] = s[i];
            else if(s[i]<s[n-i-1] || !check2)
            {
                s[i] = s[i]+1;
                s[n-i-1] = s[i];
            }
        }
        cout<<s<<endl;
    }
    return(0);
}