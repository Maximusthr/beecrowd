#include <bits/stdc++.h>

using namespace std;

const int MAX = 100;
int lista[MAX];

int main(){
    int num[6];

    for (int i = 0; i < 6; i++){
        int aux; cin >> aux;
        lista[aux]++;
    }

    for (int i = 0; i < 6; i++){
        cin >> num[i];
    }

    int soma = 0;

    for (int i = 0; i < 6; i++){
        if (lista[num[i]]) soma++;
    }
    
    if (soma == 3) cout << "terno";
    else if (soma == 4) cout << "quadra";
    else if (soma == 5) cout << "quina";
    else if (soma == 6) cout << "sena";
    else cout << "azar";
    cout <<  "\n";
}
