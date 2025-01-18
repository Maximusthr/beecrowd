#include <bits/stdc++.h>

using namespace std;

int main(){

    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        int x; cin >> x;

        vector<int> vetor;

        for (int j = 0; j < x; j++){
            int aux; cin >> aux;
            vetor.push_back(aux);
        }

        string y; cin >> y;

        int soma = 0;
        for (int j = 0; j < (int)y.size(); j++){
            if (y[j] == 'S' && vetor[j] <= 2) soma++;
            else if (y[j] == 'J' && vetor[j] >= 3) soma++;
        }

        cout << soma << "\n";
    }
}
