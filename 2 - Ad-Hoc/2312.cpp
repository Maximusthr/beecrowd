#include <bits/stdc++.h>

using namespace std;

typedef struct{
    string pais;
    int ouro;
    int prata;
    int bronze;
} quadro;

int main(){
    int qtd; cin >> qtd;

    vector<quadro> medalhas;
    for (int i = 0; i < qtd; i++){
        string pais; int ouro, prata, bronze;
        cin >> pais >> ouro >> prata >> bronze;
        medalhas.push_back({pais, ouro, prata, bronze});
    }

    sort(medalhas.begin(), medalhas.end(), [&](quadro &x, quadro &y){
        if (x.ouro != y.ouro) return x.ouro > y.ouro;
        if (x.prata != y.prata) return x.prata > y.prata;
        if (x.bronze != y.bronze) return x.bronze > y.bronze;
        return x.pais < y.pais;
    });

    for (int i = 0; i < qtd; i++){
        cout << medalhas[i].pais << " " << medalhas[i].ouro << " " << medalhas[i].prata << " " << medalhas[i].bronze << "\n";
    }
}
