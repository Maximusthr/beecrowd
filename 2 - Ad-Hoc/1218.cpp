#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    string num;
    int cont = 1;
    while(cin >> num){
        if (cont != 1) cout << "\n";

        cin.ignore();
        string aux; getline(cin, aux);
        vector<pair<string, string>> pares;

        int espacos = 0;
        string tipo;
        string par1, par2;
        for (int i = 0; i < (int)aux.size(); i++){
            if (espacos % 2 == 0 && aux[i] != ' ') tipo += aux[i];
            else if (espacos % 2 == 0 && aux[i] == ' '){
                if ((int)tipo.size() == 0) continue;
                par1 = tipo;
                tipo = {};
                espacos++;
            }

            if (espacos % 2 == 1 && aux[i] != ' '){
                tipo += aux[i];
                par2 = tipo;
                tipo = {};
                espacos++;
                pares.push_back({par1, par2});
            }
        }

        int fem = 0, masc = 0;
        for (int i = 0; i < (int)pares.size(); i++){
            if (num == pares[i].first){
                if (pares[i].second == "F") fem++;
                else masc++;
            }
        }

        cout << "Caso " << cont << ":\n";
        cout << "Pares Iguais: " << fem+masc << "\n";
        cout << "F: " << fem << "\n";
        cout << "M: " << masc << "\n";

        cont++;
    }
}
