#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    int vetor[qtd];
    for (int i = 0; i < qtd; i++){
        cin >> vetor[i];
    }

    int ans = -101;
    int soma_ant = -101;

    for (int i = 0; i < qtd; i++){
        if (soma_ant < 0) soma_ant = vetor[i];
        else if (soma_ant >= 0) soma_ant += vetor[i];
        if (soma_ant > ans) ans = soma_ant;
    }

    cout << ans << "\n";
}
