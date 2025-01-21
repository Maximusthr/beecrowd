#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    vector<pair<int, double>> alunos;
    for (int i = 0; i < qtd; i++){
        int m; double n;
        cin >> m >> n;
        alunos.push_back({m, n});
    }

    sort(alunos.begin(), alunos.end(), [&](pair<int, double> &x, pair<int, double> &y){
        return x.second > y.second;
    });

    if (alunos[0].second < 8.0) cout << "Minimum note not reached\n";
    else cout << alunos[0].first << '\n';
}
