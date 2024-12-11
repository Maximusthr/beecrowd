#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    cin.ignore();
    while(qtd--){
        string x; getline(cin, x);
        
        int tamanho = (int)x.size();
        
        // primeira passada
        for (int i = 0; i < tamanho; i++){
            if ((x[i] >= 65 && x[i] <= 90) || (x[i] >= 97 && x[i] <= 122)){
                x[i] += 3;
            }
        }
        
        // segunda passada;
        
        string aux = {};
        
        for (int i = tamanho-1; i >= 0; i--){
            aux += x[i];
        }
        
        // terceira passada;
        
        for (int i = tamanho/2; i < tamanho; i++){
            aux[i] -= 1;
        }
        
        cout << aux << "\n";
    }
}
