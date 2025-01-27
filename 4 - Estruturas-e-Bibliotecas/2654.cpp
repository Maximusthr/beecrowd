#include <bits/stdc++.h>

using namespace std;

typedef struct{
    string nome;
    int poder;
    int deuses;
    int mortes;
} atributos;

int main(){
    int qtd; cin >> qtd;

    vector<atributos> god;
    for (int i = 0; i < qtd; i++){
        string nome;
        int poder, deuses, mortes;
        cin >> nome >> poder >> deuses >> mortes;

        god.push_back({nome, poder, deuses, mortes});
    }

    sort(god.begin(), god.end(), [&](atributos &x, atributos &y){
        
        if (x.poder != y.poder) return x.poder > y.poder;
        else if (x.deuses != y.deuses) return x.deuses > y.deuses;
        else if (x.mortes != y.mortes) return x.mortes < y.mortes;
        else {
            return x.nome < y.nome;
        }
    });

    cout << god[0].nome << "\n";
}
