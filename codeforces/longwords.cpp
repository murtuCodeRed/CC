#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num,count=0,i,len=0;
    cin>>num;
    string str[num];

    for(i=0;i<num;i++)
    {
        cin>>str[i];
    }

    cout<<endl;

    for(i=0;i<num;i++)
    {
        len=str[i].length();

        if(len<=10)
        {
            cout<<str[i]<<endl;
        }
        else
        {
            count=len-2;
            cout<<str[i][0]<<count<<str[i][len-1]<<endl;
        }

    }
    return 0;
}