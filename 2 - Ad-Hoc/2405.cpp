#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    int n, m, x, y, k; cin >> n >> m >> x >> y >> k;

    x--, y--;

    vector<vector<int>> matriz(n, vector<int> (m, -1));

    for (int i = 0; i < k; i++){
        int x, y; cin >> x >> y;
        x--, y--;
        matriz[x][y] = 1;
    }

    int pos_X[] = {-1, 0, 0, 1, 1, -1, 1, -1};
    int pos_Y[] = {0, 1, -1, 0, 1, -1, -1, 1};

    
    auto isValid = [&](int x, int y) -> bool{
        return (x >= 0 && x < n && y >= 0 && y < m && matriz[x][y] == -1);
    };
    
    auto dfs = [&](auto self, int u, int v) -> void {
        matriz[u][v] = 0;
        
        for (int i = 0; i < 8; i++){
            int cx = pos_X[i] + u;
            int cy = pos_Y[i] + v;
            
            if (isValid(cx, cy)){
                self(self, cx, cy);
            }
        }
    };
    
    dfs(dfs, x, y);
    
    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (matriz[i][j] == 0) ans++;
        }
    }

    cout << ans << "\n";
}