#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        long long x; cin >> x;
        long long soma = 0;
        
        for (int j = 1; j <= x; j++){
            soma += (long long)j;
            if (x == 1) {
                cout << x << " nao eh perfeito\n";
                break;
            }
            if (soma == x) {
                cout << x << " eh perfeito\n";
                break;
            }
            else if (soma > x){
                cout << x << " nao eh perfeito\n";
                break;
            }
        }
    }
}
