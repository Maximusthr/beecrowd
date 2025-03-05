#include <bits/stdc++.h>

using namespace std;

int n, m;

const int MAX = 1e3+1;
vector<string> g(MAX);
vector<vector<bool>> vis(MAX, vector<bool>(MAX));
vector<vector<bool>> ponto(MAX, vector<bool> (MAX));

int pos_X[] = {-1, 0, 0, 1};
int pos_Y[] = {0, 1, -1, 0};

bool isValid(int x, int y){
    if (x < 0 || x >= n || y < 0 || y >= m) return false;
    return true;
}


void dfs(int u, int v){
    stack<pair<int, int>> pilha;
    pilha.push({u, v});

    while(!pilha.empty()){
        auto [cx, cy] = pilha.top();
        pilha.pop();
        vis[cx][cy] = true;

        //quando estiver na borda, vale.
        if (cx == 0 || cy == 0 || cx == n-1 || cy == m-1) ponto[cx][cy] = true;

        for (int i = 0; i < 4; i++){
            int x = cx + pos_X[i];
            int y = cy + pos_Y[i];
            if (!isValid(x, y)) continue;
    
            if (g[x][y] == '.') {
                ponto[cx][cy] = true;
            }
            else if (g[x][y] == '#' && !vis[x][y]){
                
                pilha.push({x, y});
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
        cin >> g[i];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (g[i][j] == '#' && !vis[i][j]){
                dfs(i, j);
            }
        }
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (ponto[i][j]) ans++;
        }
    }
    
    cout << ans << "\n";
}
