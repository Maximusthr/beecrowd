#include <bits/stdc++.h>

using namespace std;

void dfs(int v, vector<bool> &vis, vector<vector<int>> &g){
    vis[v] = true;
    
    for (auto w : g[v]){
        if (!vis[w]){
            dfs(w, vis, g);
        }
    }
}

int main(){
    int e, l; 
    
    int c = 1;    
    while(cin >> e >> l && (e || l)){
        vector<vector<int>> g(e);
        vector<bool> vis(e);

        for (int i = 0; i < l; i++){
            int x, y; cin >> x >> y; 
            x--, y--;

            g[x].push_back(y);
            g[y].push_back(x);
        }

        dfs(0, vis, g);
        bool ok = true;
        for (int i = 0; i < e; i++){
            if (!vis[i]) {
                ok = false;
                break;
            }
        }
        
        cout << "Teste " << c << "\n";
        cout << (ok ? "normal" : "falha") << "\n";

        cout << "\n";
        c++;
        g.clear();
        vis.clear();
    }
}
