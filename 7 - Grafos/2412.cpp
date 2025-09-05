#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 5002;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    int n, m; cin >> n >> m;

    vector<pair<int, int>> pontos(n);
    for (int i = 0; i < n; i++){
        cin >> pontos[i].first >> pontos[i].second;
    }

    vector<vector<bool>> vis(MAX, vector<bool> (MAX));

    auto dist = [&](int x1, int y1, int x2, int y2){
        return ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    };

    auto dfs = [&](auto self, int u, int v) -> void {
        if (!vis[u][v]) vis[u][v] = true;
        
        for (auto [x, y] : pontos){
            if (!vis[x][y]) {
                if (dist(u, v, x, y) <= m*m){
                    self(self, x, y);
                }
            }
        }
    };

    dfs(dfs, pontos[0].first, pontos[0].second);

    bool ok = true;
    for (int i = 0; i < n; i++){
        if (!vis[pontos[i].first][pontos[i].second]) ok = false;
    }

    if (!ok) cout << "N" << "\n";
    else cout << "S" << "\n";
}