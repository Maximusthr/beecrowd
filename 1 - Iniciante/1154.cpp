#include <bits/stdc++.h>

using namespace std;

int main(){
    double x, soma = 0, qtd = 0;
    while(cin >> x && x >= 0){
        soma += x;
        qtd++;
    }

    cout << fixed << setprecision(2);
    cout << soma/qtd << "\n";
}
