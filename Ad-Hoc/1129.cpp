#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int qtd;
    while(cin >> qtd && qtd){
        for (int i = 0; i < qtd; i++){
            vector<int> numeros;
            int soma = 0;
            for (int j = 0; j < 5; j++){
                int x; cin >> x;
                if (x <= 127) {
                    soma++;
                }
                numeros.push_back(x);
            }
            if (soma != 1) cout << "*" << "\n";
            else {
                int pos;
                for (int j = 0; j < 5; j++){
                    if (numeros[j] <= 127) {
                        pos = j;
                        break;
                    }
                }
                if (pos == 0) cout << "A" << "\n";
                if (pos == 1) cout << "B" << "\n";
                if (pos == 2) cout << "C" << "\n";
                if (pos == 3) cout << "D" << "\n";
                if (pos == 4) cout << "E" << "\n";
            }
        }
    }
}
