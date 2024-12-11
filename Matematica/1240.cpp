#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    while(qtd--){
        int x, y; cin >> x >> y;
        int z = x - y;

        bool ok = true;

        if (x < y) ok = false;
        
        int digitos = 0;

        while (y > 0){
            digitos++;
            y /= 10;
        }

        while (digitos-- && x >= y){
            if (z % 10 != 0){
                ok = false;
                break;
            }
            z /= 10;
        }
        
        cout << (ok ? "encaixa" : "nao encaixa") << "\n";
    }
}
