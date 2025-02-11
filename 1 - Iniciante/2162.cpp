#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    vector<int> vetor;

    for (int i = 0; i < qtd; i++){
        int aux; cin >> aux;
        vetor.push_back(aux);
    }
    
    bool pico = false;
    bool vale = false;
    bool ok = false;
    int aux = 0;
    int aux2 = 0;

    for (int i = 1; i < qtd-1; i++){
        if (pico && aux > 1) {
            ok = false;
            break;
        }
        else if (vetor[i] > vetor[i-1] && vetor[i] > vetor[i+1]) {
            aux++;
            aux2 = 0;
            pico = true;
            ok = true;
            vale = false;
        }
        if (vale && aux2 > 1){
            ok = false;
            break;
        }
        else if (vetor[i] < vetor[i-1] && vetor[i] < vetor[i+1]){
            aux = 0;
            aux2++;
            vale = true;
            ok = true;
            pico = false;
        }

    }

    cout << (ok ? "1" : "0") << "\n";
}
