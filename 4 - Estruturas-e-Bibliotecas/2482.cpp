#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    cin.ignore();
    vector<pair<string, string>> idioma;

    for (int i = 0; i < qtd; i++){
        string pais, lingua;
        getline(cin, pais);
        getline(cin, lingua);
        idioma.push_back({pais, lingua});
    }

    int n; cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++){
        string nom, pais; 
        getline(cin, nom);
        getline(cin, pais);
        for (int j = 0; j < qtd; j++){
            if (pais == idioma[j].first) {
                cout << nom << "\n";
                cout << idioma[j].second << "\n";
                break;
            }
        }
        cout << "\n";
    }
}
