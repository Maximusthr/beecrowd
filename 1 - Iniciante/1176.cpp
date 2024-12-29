#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    unsigned long long int vetor[60];

    vetor[0] = 0;
    vetor[1] = 1;
    for (int i = 2; i <= 60; i++){
        vetor[i] = vetor[i-1] + vetor[i-2];
    }

    for (int i = 0; i < qtd; i++){
        int x; cin >> x;

        cout << "Fib("<< x << ") = " << vetor[x] << "\n";
    }
}
