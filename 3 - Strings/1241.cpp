#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    while(qtd--){
        string x, y; cin >> x >> y;
        bool ok = true;

        for (int i = 0; i < (int)y.size(); i++){
            if (y[i] != x[(int)x.size() + i - (int)y.size()]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "encaixa" : "nao encaixa") << "\n";
    }
}
