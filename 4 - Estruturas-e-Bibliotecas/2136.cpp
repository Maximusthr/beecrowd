#include <bits/stdc++.h>

using namespace std;

typedef struct{
    string nome;
    int pos;
} lista;

int main(){

    string pessoa;
    int pos = 0;
    vector<lista> nomes;
    vector<lista> neg; 

    while(cin >> pessoa){
        if (pessoa == "FIM") break;
        string resp; cin >> resp;

        if (resp == "YES"){
            nomes.push_back({pessoa, pos});
            pos++;
        }
        else neg.push_back({pessoa, pos});
    }

    sort(nomes.begin(), nomes.end(), [&](lista &x, lista &y){
        if ((int)x.nome.size() != (int)y.nome.size()) return (int)x.nome.size() > (int)y.nome.size();
        return x.pos < y.pos;
    });

    string ans = nomes[0].nome;

    sort(nomes.begin(), nomes.end(), [&](lista &x, lista &y){
        return x.nome < y.nome;
    });
    sort(neg.begin(), neg.end(), [&](lista &x, lista &y){
        return x.nome < y.nome;
    });

    for (int i = 0; i < (int)nomes.size(); i++){
        if (i > 0) {
            if (nomes[i].nome == nomes[i-1].nome) continue;
        }
        cout << nomes[i].nome << "\n";
    }
    for (int i = 0; i < (int)neg.size(); i++){
        cout << neg[i].nome << "\n";
    }

    cout << "\n";
    cout << "Amigo do Habay:\n" << ans << "\n";
}
