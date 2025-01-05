#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    //Entao eh Natal!

    string frase = "Entao eh Natal!";
    
    for (int i = 0, aux = 0; i < (int)frase.size(); i++){
        if (frase[i] == 'a'){
            aux++;
            if (aux == qtd+1) {
                aux = 0;
                continue;
            }
            else {
                i--;
                cout << "a";
                continue;
            }
        }
        cout << frase[i];
    }
    cout << "\n";
}
