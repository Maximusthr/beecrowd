#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 2050;

int memo[MAX][MAX];
int n, k;

vector<int> canos;
vector<int> valor;

int dp(int i, int p){
    if (i >= n){
        return 0;
    }

    if (canos[i] > p){
        return memo[i][p] = dp(i+1, p);
    }

    if (memo[i][p] != -1) return memo[i][p];

    return memo[i][p] = max(valor[i] + dp(i, p-canos[i]), dp(i+1, p));
}

void solve(){
    cin >> n >> k;

    canos.assign(n, 0);
    valor.assign(n, 0);

    for (int i = 0; i < n; i++){
        cin >> canos[i] >> valor[i];
    }

    memset(memo, -1, sizeof(memo));

    cout << dp(0, k) << "\n";

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    // int t; cin >> t;
    // while(t--){
    solve();
    // }
}