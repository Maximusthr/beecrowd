#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    cin.ignore();
    
    while(qtd--){
        string x; getline(cin, x);
        string aux = {};

        int tamanho = (int)x.size()-1;

        // primeira metade
        for (int i = tamanho/2; i >= 0; i--){
            aux += x[i];
        }

        // segunda metade
        for (int i = tamanho/2, j = tamanho; i < tamanho; i++, j--){
            aux += x[j];
        }
        
        cout << aux << "\n";
    }
}