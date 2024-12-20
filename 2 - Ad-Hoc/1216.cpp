#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    double soma = 0;
    double qtd = 0;

    while(1){
        cout << fixed << setprecision(1);

        string aux; getline(cin, aux);
        if ((int)aux.size() == 0) break;
        double valor; cin >> valor;
        cin.ignore();

        soma += valor;
        qtd++;
    }

    cout << soma/qtd << "\n";
}
