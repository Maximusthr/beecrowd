#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<set<int>> g;
vector<int> vis;

int ans = 0;
void dfs(int u){
    if (!vis[u]) vis[u] = true;

    for (auto v : g[u]){
        ans++;
        if (!vis[v]){
            dfs(v);
        }
    }
}

void solve(){
    int x; cin >> x;

    int n, m; cin >> n >> m;

    g.resize(n, set<int> ());
    vis.resize(n);
    
    for (int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        x, y;
        g[x].insert(y);
        g[y].insert(x);
    }

    dfs(x);

    cout << ans << "\n";

    g.clear();
    vis.clear();
    ans = 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}