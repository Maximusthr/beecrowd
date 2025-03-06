#include <bits/stdc++.h>

using namespace std;

const int MAX = 27;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX);

vector<vector<int>> valores(MAX);

int pos;

void dfs(int u){
    if (!vis[u]) valores[pos].push_back(u);

    vis[u] = true;

    for (auto w : g[u]){
        if (!vis[w]){
            dfs(w);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t; cin >> t;
    int count = 1;
    while(t--){
        int n, m; cin >> n >> m;

        string arr = "abcdefghijklmnopqrstuvwxyz";
        
        for (int i = 0; i < m; i++){
            char a, b; cin >> a >> b;

            int transf_a = a-'a';
            int transf_b = b-'a';

            g[transf_a].push_back(transf_b);
            g[transf_b].push_back(transf_a);
        }

        int sum = 0;
        pos = 0;
        for (int i = 0; i < n; i++){
            int valor = arr[i]-'a';
            //cout << valor << "\n";

            if (!vis[valor]){
                dfs(valor);
                sum++;
                pos++;
            }
        }

        cout << "Case #" << count << ":" << "\n";
        
        for (int i = 0; i < sum; i++){
            sort(valores[i].begin(), valores[i].end());
            for (int j = 0; j < (int)valores[i].size(); j++){
                cout << char(valores[i][j] + 'a') << ",";
            }
            cout << "\n";
        }
        cout << sum << " connected components" << "\n\n";

        count++;

        g.assign(MAX, vector<int> (MAX, 0));
        vis.assign(MAX, 0);
        valores.assign(MAX, vector<int>());
    }
}
