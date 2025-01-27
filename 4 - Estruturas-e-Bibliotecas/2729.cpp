#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    cin.ignore();
    for (int i = 0; i < qtd; i++){
        string nomes; getline(cin, nomes);

        set<string> compras;
        vector<string> n;
        string aux;
        for (int j = 0; j < (int)nomes.size(); j++){
            if (nomes[j] == ' ' || j == (int)nomes.size()-1){
                if (j == (int)nomes.size()-1) aux += nomes[j];
                n.push_back(aux);
                aux = { };
            } else {
                aux += nomes[j];
            }
        }

        for (int j = 0; j < (int)n.size(); j++){
            compras.insert(n[j]);
        }

        for (auto k = compras.begin(); k != compras.end(); k++){
            auto it = k;
            it++;
            if (it == compras.end()) cout << *k << "\n";
            else cout << *k << " ";
        }

    }
}
