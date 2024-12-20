#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int qtd; cin >> qtd;
    deque<long long> pilha;

    while(qtd--){

        string aux; cin >> aux;
        int tamanho = (int)pilha.size();
        if (aux == "PUSH"){
            long long numero; cin >> numero;
            pilha.push_back(numero);
        }
        else if(aux == "MIN"){
            long long menor = 1e9 + 5;
            if (tamanho == 0) cout << "EMPTY\n";
            else {
                for (int i = 0; i < tamanho; i++){
                    if (menor > pilha.back()) menor = pilha.back();
                    long long aux = pilha.back();
                    pilha.pop_back();
                    pilha.push_front(aux);
                }
                cout << menor << "\n";
            }
        }
        else if(aux == "POP"){
            if (tamanho == 0) cout << "EMPTY\n";
            else pilha.pop_back();
        }
    }
}
