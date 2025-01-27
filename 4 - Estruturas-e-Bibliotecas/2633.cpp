#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd;

    while(cin >> qtd){
        vector<pair<string, int>> comida;

        for (int i = 0; i < qtd; i++){
            string x; int aux;
            cin >> x >> aux;
            comida.push_back({x, aux});
        }

        sort(comida.begin(), comida.end(), [&](pair<string, int> &x, pair<string, int> &y){
            return x.second < y.second;
        });

        for (int i = 0; i < qtd; i++){
            if (i == qtd-1) cout << comida[i].first << "\n";
            else cout << comida[i].first << " ";
        }
    }
}
