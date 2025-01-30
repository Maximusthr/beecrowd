#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    while(qtd--){
        int m, n; cin >> m >> n;
        cin.ignore();
        vector<pair<string, string>> traducao;
        
        for (int i = 0; i < m; i++){
            string x, y;
            getline(cin, x);
            getline(cin, y);
            traducao.push_back({x, y});
        }

        vector<string> musica;
        for (int i = 0; i < n; i++){
            string x;
            getline(cin, x);
            string aux;
            for (int j = 0; j < (int)x.size(); j++){
                if (x[j] == ' ' || j == (int)x.size()-1){
                    if (j == (int)x.size()-1) aux += x[j];
                    musica.push_back(aux);
                    aux = {};
                }
                else {
                    aux += x[j];
                }
            }
            
            for (int j = 0; j < (int)musica.size(); j++){
                bool ok = false;
                for (int k = 0; k < (int)traducao.size(); k++){
                    if (musica[j] == traducao[k].first) {
                        if (j != (int)musica.size()-1) cout << traducao[k].second << " ";
                        else cout << traducao[k].second;
                        ok = true;
                        break;
                    }
                }
                if (!ok) {
                    if (j != (int)musica.size()-1) cout << musica[j] << " ";
                    else cout << musica[j];
                }
            }
            musica.clear();
            cout << "\n";
        }
        cout << "\n";
    }
}
