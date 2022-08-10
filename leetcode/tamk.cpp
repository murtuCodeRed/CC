#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> height={1,8,6,2,5,4,8,3,7};
    vector<int> height={1,1};

    int n=height.size(),i,j,h,best=0,area;
    int base=n-1;
    for(i=0,j=n-1;i<j;)
    {
        h=height[i]>=height[j]?height[j]:height[i];
        height[i]>=height[j]?j--:i++;

        area=base*h;
        // cout<<h<<" "<<base<<" "<<area<<endl;

        best=best>area?best:area;
        
        base--;
    }

    cout<<best;
}