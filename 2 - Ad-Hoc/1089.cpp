#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd;

    while(cin >> qtd && qtd){
        vector<int> vetor;

        for (int i = 0; i < qtd + 2; i++){
            if (i == qtd) {
                vetor.push_back(vetor[0]);
                continue;
            }
            if (i == qtd + 1){
                vetor.push_back(vetor[1]);
                break;
            }
            int aux; cin >> aux;
            vetor.push_back(aux);
        }
        
        int soma = 0;
        for (int i = 1; i < qtd+1; i++){
            if ((vetor[i] > vetor[i-1] && vetor[i] > vetor[i+1]) || (vetor[i] < vetor[i-1] && vetor[i] < vetor[i+1])) soma++;
        }

        cout << soma << "\n";
    }
}
