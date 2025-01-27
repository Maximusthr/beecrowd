#include <bits/stdc++.h>

using namespace std;

typedef struct{
    string nome;
    char regiao;
    int dist;
} local;

int main(){
    int qtd;

    while(cin >> qtd){
        vector<local> locais;
        for (int i = 0; i < qtd; i++){
            string nome;
            char regiao;
            int dist;
            cin >> nome >> regiao >> dist;
            locais.push_back({nome, regiao, dist});
        }

        sort(locais.begin(), locais.end(), [&](local &x, local &y){
            if (x.dist != y.dist) return x.dist < y.dist;
            else if (x.regiao != y.dist) return x.regiao < y.regiao;
            else return x.nome < y.nome;
        });

        for (int i = 0; i < qtd; i++){
            cout << locais[i].nome << "\n";
        }
    } 
}
