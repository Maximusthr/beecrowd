#include <bits/stdc++.h>

using namespace std;

double raiz(int qtd){
    double valor = 3;
    double aux = 0;
    for (int i = 0; i < qtd; i++){
        aux = 1.0 / (aux + 6.0);
    }
    return valor+aux;
}

int main(){
    int qtd; cin >> qtd;

    cout << fixed << setprecision(10) << raiz(qtd) << "\n";
    
}
