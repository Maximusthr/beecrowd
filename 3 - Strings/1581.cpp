#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    
    while(qtd--){
        int x; cin >> x;
        vector<string> aux;
        for (int i = 0; i < x; i++){
            string palavra; cin >> palavra;
            aux.push_back(palavra);
        }
        bool ok = true;
        for (int i = 1; i < x; i++){
            if (aux[0] != aux[i]){
                ok = false;
                cout << "ingles" << "\n";
                break;
            }
        }
        if (ok) cout << aux[0] << "\n";
    }
}
