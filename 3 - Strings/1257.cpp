#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    
    string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < qtd; i++){
        int x; cin >> x;

        int aux = 0;
        int soma = 0;
        for (int j = 0; j < x; j++){
            string frase; cin >> frase;
            for (int k = 0; k < (int)frase.size(); k++){
                int var = alfabeto.find(frase[k]);
                soma += var + k + aux;
            }
            aux++;
        }

        cout << soma << "\n";
    }
}
