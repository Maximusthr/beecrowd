#include <bits/stdc++.h>

using namespace std;

int main(){
    string letras = "abcdefghijklmnopqrstuvwxyz";

    int qtd; cin >> qtd;
    cin.ignore();

    for (int i = 0; i < qtd; i++){
        string aux; getline(cin, aux);
        int soma = 0;
        for (int j = 0; j < (int)letras.size(); j++){
            for (int k = 0; k < (int)aux.size(); k++){
                if (letras[j] == aux[k]) {
                    soma++;
                    break;
                }
            }
        }

        if (soma == 26) cout << "frase completa" << "\n";
        else if (soma >= 13) cout << "frase quase completa" << "\n";
        else cout << "frase mal elaborada" << "\n";
    }
}
