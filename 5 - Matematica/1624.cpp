#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 500;

int n, k;
int memo[105][MAX];

vector<int> preco;
vector<int> peso;

int dp(int i, int p){
    if (i >= n){
        return 0;
    }

    if (memo[i][p] != -1) return memo[i][p];

    if (peso[i] > p){
        return memo[i][p] = dp(i+1, p);
    }

    return memo[i][p] = max(preco[i] + dp(i+1, p - peso[i]), dp(i+1, p));
}

void solve(){

    preco.resize(n);
    peso.resize(n);
    
    for (int i = 0; i < n; i++){
        cin >> preco[i] >> peso[i];
    }

    cin >> k;

    memset(memo, -1, sizeof(memo));

    cout << dp(0, k) << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    while(cin >> n && n){
        solve();
    }
}
