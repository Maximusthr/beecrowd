#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    cin.ignore();
    
    while (qtd--){
        string x; getline(cin, x);
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        string aux = {};
        
        for (int i = 0; i < (int)x.size(); i++){
            if (x[i] == ' ' || (x[i] < 97 && x[i] > 122)) continue;
            else {
                aux += x[i];
            }
        }

        map<char, int> letras;

        for (int i = 0; i < (int)aux.size(); i++){
            letras[aux[i]]++;
        }

        int maior = 0;
        for (auto [x, y] : letras){
            if (y > maior) maior = y;
        }
            
        for (auto [x, y] : letras){
            //cout << x << " " << y << "\n";
            if (maior == y) cout << x;
        }
        cout << "\n";
    }
}
