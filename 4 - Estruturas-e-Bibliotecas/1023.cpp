#include <bits/stdc++.h>

using namespace std;

int main(){

    int qtd;
    int cidade = 1;
    while(cin >> qtd && qtd){
        if (cidade > 1) cout << "\n";
        vector<pair<int, int>> consumo;
        int x, y;
        int pessoas = 0, soma = 0;
        for (int i = 0; i < qtd; i++){
            cin >> x >> y;
            consumo.push_back({x, y/x});
            pessoas += x;
            soma += y;
        }
        
        double media = (double)soma/pessoas;
        media *= 100;
        media = floor(media);
        media /= 100;


        sort(consumo.begin(), consumo.end(), [&](pair<int, int> &x, pair<int, int> &y){
            return x.second < y.second;
        });

        for (int i = 0; i < (int)consumo.size(); i++){
            if (i == (int)consumo.size()-1) break;
            if (consumo[i].second == consumo[i+1].second){
                consumo[i+1].first += consumo[i].first;
                consumo[i].first = 0;
            }
        }

        cout << "Cidade# " << cidade << ":\n";

        for (int i = 0; i < (int)consumo.size(); i++){
            if (consumo[i].first == 0) continue;
            if (i == (int)consumo.size()-1) cout << consumo[i].first << "-" << consumo[i].second << "\n";
            else cout << consumo[i].first << "-" << consumo[i].second << " ";
        }

        cout << fixed << setprecision(2) << "Consumo medio: " << media << " m3.\n";

        cidade++;
    }
}
