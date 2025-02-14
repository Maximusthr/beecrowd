#include <bits/stdc++.h>

using namespace std;

int main(){
    int valor = 151;

    int qtd; cin >> qtd;

    set<string> pok;

    for (int i = 0; i < qtd; i++){
        string aux; cin >> aux;
        pok.insert(aux);
    }

    cout << "Falta(m) " << valor-(int)pok.size() << " pomekon(s)." << "\n";
}
