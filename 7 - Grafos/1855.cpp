#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n, m;
vector<string> g;
vector<vector<bool>> vis;

// bool isValid(int x, int y){
//     return (x >= 0 && x < n && y >= 0 && y < m);
// }

bool ok = true;
void dfs(int u, int v, char dir){
    if (g[u][v] == '*'){
        return;
    }

    if (!vis[u][v]){
        vis[u][v] = true;
    }
    else {
        ok = false;
        return;
    }

    if (dir == '>'){
        if (g[u][v+1] != '.' && g[u][v+1] != '*'){
            dfs(u, v+1, g[u][v+1]);
        }
        else dfs(u, v+1, dir);
    }
    else if (dir == 'v'){
        if (g[u+1][v] != '.' && g[u+1][v] != '*'){
            dfs(u+1, v, g[u+1][v]);
        }
        else dfs(u+1, v, dir);
    }
    else if (dir == '^'){
        if (g[u-1][v] != '.' && g[u-1][v] != '*'){
            dfs(u-1, v, g[u-1][v]);
        }
        else dfs(u-1, v, dir);
    }
    else if (dir == '<'){
        if (g[u][v-1] != '.' && g[u][v-1] != '*'){
            dfs(u, v-1, g[u][v-1]);
        }
        else dfs(u, v-1, dir);
    }
    else{
        ok = false;
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    cin >> m >> n;

    g.resize(n);

    for (int i = 0; i < n; i++){
        cin >> g[i];
    }

    vis.resize(n, vector<bool> (m));

    dfs(0, 0, g[0][0]);

    cout << (ok ? "*" : "!") << "\n";
}