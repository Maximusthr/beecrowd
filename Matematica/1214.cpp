#include <bits/stdc++.h>

using namespace std;

int main(){
    cout << fixed << setprecision(3);
    int qtd; cin >> qtd;

    while(qtd--){
        int aux; cin >> aux;
        vector<int> valores;
        double soma_turma = 0;
        for (int i = 0; i < aux; i++){
            int x; cin >> x;
            soma_turma += x;
            valores.push_back(x);
        }
        double soma = 0;
        double media_turma = soma_turma/aux;
        for (int i = 0; i < (int)valores.size(); i++){
            if (valores[i] > media_turma) soma++;
        }
        double media = soma/aux;

        cout << media*100 << "%\n";
    }
}
