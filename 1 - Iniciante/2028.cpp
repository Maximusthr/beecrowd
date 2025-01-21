#include <bits/stdc++.h>

using namespace std;

int main(){
    int valor;
    
    int casos = 1;
    while(cin >> valor){
        vector<int> vetor;
        vetor.push_back(0);

        for (int i = 1; i <= valor; i++){
            for (int j = 1, k = i; j <= i; j++){
                vetor.push_back(k);
            }
        }
        int tamanho = (int)vetor.size();

        cout << "Caso " << casos << ": " << tamanho << (tamanho > 1 ? " numeros" : " numero") << "\n";

        for (int i = 0; i < tamanho; i++){
            if (i == tamanho-1) cout << vetor[i] << "\n";
            else cout << vetor[i] << " ";
        }
        
        cout << "\n";
        casos++;   
    }
}