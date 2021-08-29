#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m , maxi = 0;
    cin>> n >> m;
    vector<int> station(m);
    for(int i=0 ; i<m ; i++) cin >> station[i];
    sort(station.begin(), station.end());
    if(station[0]!=0)
    {
        maxi=station[0];
    }

    for(int i=0 ; i<m-1 ; i++)
    {
        maxi = max(maxi, (station[i+1]-station[i])/2);
    }
    
    if(station[m-1]!=n-1)
    {
        maxi=max(n-1-(station[m-1]),maxi);
    }
    
    cout << maxi << endl;
    return 0;

}