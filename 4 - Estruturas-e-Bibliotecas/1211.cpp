#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int qtd;

    while(cin >> qtd){
        int soma = 0;

        vector<string> lista;
        
        for (int i = 0; i < qtd; i++){
            string aux; cin >> aux;
            lista.push_back(aux);
        }

        vector<string> copia = lista;

        int aux1 = 0, aux2 = 0;

        for (int i = 0; i < (int)lista.size(); i++){
            if (i+1 == (int)lista.size()) break;
            
            for (int j = 0, k = 0; j < (int)lista[i+1].size(); j++){

                if (copia[i+1][j] == lista[k][j]){
                    aux1++;
                    if (j == (int)lista[i+1].size()-1) aux2 = aux1;
                } else{
                    if (aux1 > aux2) aux2 = aux1;
                    aux1 = 0;
                    k++;
                    if (k == i+1) break;
                    j = -1;
                }
            }
        
            soma += aux2;
            aux2 = 0;
        }

        cout << soma << "\n";
    }
}
