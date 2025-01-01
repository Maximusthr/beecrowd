#include <bits/stdc++.h>

using namespace std;

int main(){

    int qtd; cin >> qtd;

    double soma = 0;
    int quant = 0;
    vector<string> frutas;
    for (int i = 0; i < qtd; i++){
        double preco; cin >> preco; cin.ignore();
        string aux; getline(cin, aux);
        
        int aux2 = 0;
        for (int j = 0; j < (int)aux.size(); j++){
            if (aux[j] == ' ' || j == (int)aux.size()-1) {
                aux2++;
                if (j == (int)aux.size()-1) cout << "day " << i+1 << ": " << aux2 << " kg\n";
            }
        }

        quant += aux2;
        soma += preco;
    }

    
    cout << fixed << setprecision(2);
    cout << (double)quant/qtd << " kg by day\n";
    cout << "R$ " << (double)soma/qtd << " by day\n";
}
