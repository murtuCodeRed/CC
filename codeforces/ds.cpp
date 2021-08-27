#include <bits/stdc++.h>

#define TRACE(x) cerr << #x << ” = ” << x << endl

#define pb push_back

#define mp make_pair

#define fi first

#define se second

#define FOR(i, a, b) for(int i = (a); i < (b); i++)

#define REP(i, n) FOR(i, 0, n)

#define SZ(x) (int)(x).size()

using namespace std;

typedef long long ll;

typedef double lf;

typedef pair<int, int> pii;

typedef vector<int> VI;

template<class Num>

Num mabs(Num A){

if(A < 0) return -A;

return A;

}

 

const int inf = (int)2e9;

 

string a, b;

 

bool ok(int i, int j, int ii, int jj){

string ta = a, tb = b;

REP(k, j) ta.pop_back();

REP(k, jj) tb.pop_back();

reverse(ta.begin(), ta.end());

reverse(tb.begin(), tb.end());

REP(k, i) ta.pop_back();

REP(k, ii) tb.pop_back();

if(ta == tb) return true;

return false;

}

 

void solve(){

cin >> a >> b;

int n = SZ(a), m = SZ(b);

int ans = n + m;

for(int i = 0; i <= n; i++){

    for(int j = 0; j <= n; j++){

    for(int ii = 0; ii <= m; ii++){

        for(int jj = 0; jj <= m; jj++){

            if(i + j > n || ii + jj > m) continue;

            if(i + j + ii + jj > ans) continue;

            if(ok(i, j, ii, jj))

            ans = min(ans, i + j + ii + jj);

        }

        }

    }

}

 

cout << ans <<endl;

}

 

int main(){

int t;

cin>>t;

while(t--)

solve();

return 0;

}