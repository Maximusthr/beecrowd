#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    string alfabeto = "abcdefghijklmnopqrstuvwxyz";

    string x;
    while(getline(cin, x)){
        
        if ((int)x.size() == 0) {
            cout << "\n";
            continue;
        }

        set<char> letras;

        for (int i = 0; i < (int)x.size(); i++) if (x[i] != ' ') letras.insert(x[i]);

        auto it = letras.begin();
        char primeiro, fim;

        int aux = 0;

        vector<pair<char, char>> pares;

        for (int j = 0; j < (int)alfabeto.size(); j++){
            if (*it == alfabeto[j]){
                aux++;
                if (aux == 1) primeiro = *it;
                fim = *it;
                it++;
                if (j == (int)alfabeto.size()-1) pares.push_back({primeiro, fim});
            } else if (*it != alfabeto[j]){
                if (aux > 0){
                    pares.push_back({primeiro, fim});
                    primeiro = *it;
                    aux = 0;
                }
            }
        }

        for (int i = 0; i < (int)pares.size(); i++){
            if (i == (int)pares.size()-1) cout << pares[i].first << ":" << pares[i].second << "\n";
            else cout << pares[i].first << ":" << pares[i].second << ", ";
        }
    }
}
