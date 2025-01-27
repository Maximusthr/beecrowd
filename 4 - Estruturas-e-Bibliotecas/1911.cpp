#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; 

    while(cin >> qtd && qtd){
        map<pair<string, string>, int> nomes;

        for (int i = 0; i < qtd; i++){
            string nome, origi;
            cin >> nome >> origi;

            nomes[{nome, origi}]++;
        }

        int aux; cin >> aux;
        int soma = 0;
        int dif = 0;
        for (int i = 0; i < aux; i++){
            string nome, copia;
            cin >> nome >> copia;

            for (auto [x, y] : nomes){
                if (nome == x.first){
                    for (int k = 0; k < (int)nome.size(); k++){
                        if (copia[k] != x.second[k]) dif++;
                    }
                    if (dif > 1) soma++;
                    dif = 0;
                    break;
                }
            }
        }
        
        cout << soma << "\n";
    }
}
