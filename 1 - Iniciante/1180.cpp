#include <bits/stdc++.h>

using namespace std;

int main(){
    int x; cin >> x;

    int aux = 2147483647;
    int posicao = 0;
    for (int i = 0; i < x; i++){
        int valor; cin >> valor;
        if (aux > valor) {
            aux = valor;
            posicao = i;
        }
    }

    cout << "Menor valor: " << aux << "\n";
    cout << "Posicao: " << posicao << "\n";
}
