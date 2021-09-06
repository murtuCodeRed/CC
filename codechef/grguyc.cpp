#include <bits/stdc++.h>
using namespace std;
#define v vector
#define vi vector<int>
#define um unordered_map
#define endl '\n'
#define testcase \
    int t;       \
    cin >> t;    \
    while (t--)

inline void cp() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool possible(string s1, string s2) {
    for (int i = 0; i < s1.length(); i++)
        if (s1[i] == '#' && s1[i] == s2[i])
            return false;

    return true;
}

int minGravitySwitches(string s1, string s2) {
    int n = s1.length();
    string arr[2];
    arr[0] = s1;
    arr[1] = s2;

    int s1Dirty = n;
    int s2Dirty = n;

    for (int i = 0; i < n; i++) {
        if (s1[i] == '#') {
            s1Dirty = i;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s2[i] == '#') {
            s2Dirty = i;
            break;
        }
    }

    int lane = 0;

    if (s1Dirty == n || s1Dirty == n)
        return 0;

    if (s1Dirty > s2Dirty) {
        lane = 0;
        int switches = 0;

        for (int i = 0; i < n; i++) {
            if (arr[lane][i] == '#') {
                switches++;
                lane ^= 1;
            }
        }

        return switches;
    }

    lane = 1;
    int switches = 0;

    for (int i = 0; i < n; i++) {
        if (arr[lane][i] == '#') {
            switches++;
            lane ^= 1;
            cout<<lane<<endl;
        }
    }

    return switches;
}

signed main() {
    // cp();  //FAST IO

    int t;
    cin >> t;

    while (t--) {
        string s1, s2;

        cin >> s1 >> s2;

        if (!possible(s1, s2))
            cout << "No" << endl;
        else {
            cout << "Yes" << endl;
            cout << minGravitySwitches(s1, s2) << endl;
        }
    }
    return 0;
}