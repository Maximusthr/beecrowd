#include <bits/stdc++.h>

using namespace std;

typedef struct{
    string nome;
    double pres;
    double total;
} geral;

int main(){
    int qtd; cin >> qtd;
    
    for (int i = 0; i < qtd; i++){
        int x; cin >> x;
        cin.ignore();
        string a; getline(cin, a);
        vector<string> nome;
        string aux;
        for (int i = 0; i < (int)a.size(); i++){
            if (a[i] == ' ' || i == (int)a.size()-1){
                if (i == (int)a.size()-1) aux += a[i];
                nome.push_back(aux);
                aux = {};
            } else {
                aux += a[i];
            }
        }

        string b; getline(cin, b);
        vector<string> freq;
        for (int i = 0; i < (int)b.size(); i++){
            if (b[i] == ' ' || i == (int)b.size()-1){
                if (i == (int)b.size()-1) aux += b[i];
                freq.push_back(aux);
                aux = {};
            } else {
                aux += b[i];
            }
        }

        vector<geral> dados;
        for (int i = 0; i < (int)nome.size(); i++){
            double pres = 0, total = 0;
            for (int j = 0; j < (int)freq[i].size(); j++){
                if (freq[i][j] == 'P') pres++;
                if (freq[i][j] == 'M') continue;
                total++;
            }
            dados.push_back({nome[i], pres, total});
        }

        vector<string> ultimo;
        for (int i = 0; i < (int)dados.size(); i++){
            if ((dados[i].pres/dados[i].total)* 100 < 75) ultimo.push_back(dados[i].nome);
        }

        for (int i = 0; i < (int)ultimo.size(); i++){
            if (i == (int)ultimo.size()-1) cout << ultimo[i];
            else cout << ultimo[i] << " ";
        }
                
       cout << "\n";
    }
}
