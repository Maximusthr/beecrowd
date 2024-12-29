#include <bits/stdc++.h>

using namespace std;

int main(){
    int x; cin >> x;

    int vetor[1000];

    int aux = 0;
    for (int i = 0; i < 1000; i++){
        if (aux == x) aux = 0;
        vetor[i] = aux;
        aux++;
    }

    for (int i = 0; i < 1000; i++){
        cout << "N[" << i << "] = " << vetor[i] << "\n";
    }
}
