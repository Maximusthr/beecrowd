#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n, m, k;

const int N = 22;
const int K = 2005;

int memo[N][N][K];
int matriz[N][N][K];

bool isValid(int x, int y, int t){
    return (x >= 1 && x <= n && y >= 1 && y <= m && t <= 2*k);
}

int func(int x, int y, int t){
    if (!isValid(x, y, t)){
        return 0;
    }

    int cont = matriz[x][y][t];

    if (memo[x][y][t] != -1){
        return memo[x][y][t];
    }

    // if (matriz[x][y][t]){
    //     cont = 1;
    // }

    return memo[x][y][t] = max({cont + func(x, y, t+1), cont + func(x+1, y, t+1), 
    cont + func(x-1, y, t+1), cont + func(x, y+1, t+1), cont + func(x, y-1, t+1),
    cont + func(x-1, y-1, t+1), cont + func(x+1, y-1, t+1), cont + func(x-1, y+1, t+1),
    cont + func(x+1, y+1, t+1)});
}

void solve(){
    
    memset(matriz, 0, sizeof(matriz));

    for (int i = 0; i < k; i++){
        int x, y, t; cin >> x >> y >> t;
        matriz[x][y][t] = 1;
    }

    int x, y; cin >> x >> y;

    memset(memo, -1, sizeof(memo));
        
    cout << func(x, y, 0) << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    while(cin >> n >> m >> k && (n || m || k)){
        solve();
    }
}