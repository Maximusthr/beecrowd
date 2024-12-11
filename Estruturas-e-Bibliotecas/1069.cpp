#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        string aux; cin >> aux;
        stack<char> pilha;
        int soma = 0;
        for (int i = 0; i < (int)aux.size(); i++){
            if (aux[i] == '<') pilha.push(aux[i]);
            else if (aux[i] == '>' && (!pilha.empty())) {
                pilha.pop();
                soma++;
            }
        }
        cout << soma << "\n";
    }
}
