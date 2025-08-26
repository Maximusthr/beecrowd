#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e5;

int n, m, k;
void solve(){
    vector<bool> pro(MAX+1);
    for (int i = 0; i < k; i++){
        int x; cin >> x;
        pro[x] = true;
    }

    queue<pair<int, int>> q;
    vector<bool> vis(MAX+1);
    
    q.push({n, 0});
    vis[n] = true;

    while(!q.empty()){
        auto [v, w] = q.front();

        q.pop();
        if (v == m){
            cout << w << "\n";
            return;
        }

        if (!vis[v+1] && v + 1 <= MAX && !pro[v+1]){
            q.push({v+1, w+1});
            vis[v+1] = true;
        }
        if (!vis[v-1] && v-1 > 0 && !pro[v-1]){
            q.push({v-1, w+1});
            vis[v-1] = true;
        }
        if (!vis[v*2] && v * 2 <= MAX && !pro[v*2]){
            q.push({v*2, w+1});
            vis[v*2] = true;
        }
        if (!vis[v*3] && v * 3 <= MAX && !pro[v*3]){
            q.push({v*3, w+1});
            vis[v*3] = true;
        }
        if (v % 2 == 0 && v/2 != 0 && !pro[v/2] && !vis[v/2]){
            q.push({v/2, w+1});
            vis[v/2] = true;
        }
    }
    cout << -1 << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    while(cin >> n >> m >> k && (n || m || k)){
        solve();
    }
}