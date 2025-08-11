#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 5;

vector<vector<int>> g(MAX, vector<int> (MAX));
vector<vector<bool>> vis(MAX, vector<bool> (MAX));

int posX[] = {-1, 0, 0, 1};
int posY[] = {0, -1, 1, 0};

bool isValid(int x, int y){
    return (x >= 0 && x < MAX && y >= 0 && y < MAX && !vis[x][y] && g[x][y] == 0);
}

void dfs(int u, int v){
    if (!vis[u][v]) vis[u][v] = true;

    for (int i = 0; i < 4; i++){
        int cx = u + posX[i];
        int cy = v + posY[i];
        
        if (isValid(cx, cy)){
            dfs(cx, cy);
        }
    }   
}

void solve(){
    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            cin >> g[i][j];
        }
    }

    dfs(0, 0);

    if (vis[MAX-1][MAX-1]) cout << "COPS" << "\n";
    else cout << "ROBBERS" << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        g.assign(MAX, vector<int> (MAX));
        vis.assign(MAX, vector<bool> (MAX));
        solve();
    }
}