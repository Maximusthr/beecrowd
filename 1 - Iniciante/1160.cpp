#include <bits/stdc++.h>

using namespace std;

int main(){

    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        int x, y; cin >> x >> y;
        double a, b; cin >> a >> b;

        int soma = 0;
        while (x <= y){
            soma++;
            if (soma > 100) break;
            x += floor(x*(a/100));
            y += floor(y*(b/100));
        }

        cout << (soma <= 100 ? to_string(soma) + " anos." : "Mais de 1 seculo.") << "\n";
    }

}
