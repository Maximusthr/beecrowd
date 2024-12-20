#include <bits/stdc++.h>

using namespace std;

double dias(double x, int soma){
    if (x <= 1) return soma;
    soma++;
    return dias(x/2, soma);
}

int main(){
    int qtd; cin >> qtd;
    while(qtd--){
        double x; cin >> x;
        int soma = 0;
        cout << int(dias(x, soma)) << " dias\n";
    }
}
