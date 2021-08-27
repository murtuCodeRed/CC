#include <bits/stdc++.h>
using namespace std;

// string conv(string s)
// {
//     unordered_map<char,int> mp;
//     unordered_map<char, int>:: iterator p;

//     for(int i=0;i<s.length();i++)
//     {
//         if(mp.find(s[i])==mp.end())
//         {
//             mp.insert(make_pair(s[i],1));
//         }
//         else
//         {
//             // cout<<"     "<<s[i]<<endl;
//             mp[s[i]]++;
//         }
//     }

//     string n;
//     for (p = mp.begin(); p != mp.end(); p++)
//     {
//         // cout<<p->first<<" "<<p->second<<endl;
//         if(p->second==2)
//         {
//             n.push_back(p->first);
//             n.push_back(p->first);
//         }
//         else if(p->second==1)
//         {
//             n.push_back(p->first);
//         }
//         else
//         {
//         n.push_back(p->first);
//         }

//     }
    
//     sort(n.begin(),n.end());
//     return n;
// }



int match(string ss,string w)
{
    unordered_map<char,int> mpss;
    unordered_map<char,int> mpw;
    unordered_map<char, int>:: iterator p;
    unordered_map<char, int>:: iterator q;

    for(int i=0;i<ss.length();i++)
    {
        if(mpss.find(ss[i])==mpss.end())
        {
            mpss.insert(make_pair(ss[i],1));
        }
        else
        {
            // cout<<"     "<<s[i]<<endl;
            mpss[ss[i]]++;
        }
    }
    for(int i=0;i<w.length();i++)
    {
        if(mpw.find(w[i])==mpw.end())
        {
            mpw.insert(make_pair(w[i],1));
        }
        else
        {
            // cout<<"     "<<s[i]<<endl;
            mpw[w[i]]++;
        }
    }

    if(mpss.size()!=mpw.size())
    {
        return 0;
    }
    
    for (p = mpss.begin(); p != mpss.end();p++)
    {

        for (q = mpw.begin(); q != mpw.end(); q++)
        {
            cout<<"S "<<p->first<<" "<<p->second<<endl;
            cout<<"Word "<<q->first<<" "<<q->second<<endl;
            if(p->first!=q->first)
            {
                return 0;
            }
            if(q->second>p->second)
            {
                return 0;
            }
            if(p->second>=3)
            {
                if(p->first==q->first)
                {
                    continue;
                }
                // else
                // {
                //     // return 0;
                // }

            }
            else
            {
                if(p->first==q->first && p->second==q->second)
                {
                    continue;
                }
                else
                {
                    return 0;
                }
            }
        }

    }
    return 1;

}

int main()
{
        vector<string> words= {"sa"};
        string s="sass";
// ["sa"]

        // "heeellooo"
        // string ss=conv(s);
        
        // cout<<endl<<ss<<endl;
        int i,co=0;
        
        for(i=0;i<words.size();i++)
        {
            string ne = words[i];
            // cout<<ne<<endl;
            if(ne.length()>s.length())
            {
                
            }
            else if(match(s,ne)==1)
            {
                ++co;    
            }
        }
        cout<<co<<endl;
}