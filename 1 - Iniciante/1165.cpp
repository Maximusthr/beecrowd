#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        int x; cin >> x;
        int soma = 0;
        for (int j = 1; j <= sqrt(x); j++){
            if (x % j == 0) soma++;
            if (soma == 2) {
                cout << x << " nao eh primo\n";
                break;
            }
        }
        if (soma < 2) cout << x << " eh primo\n";
    }
}
