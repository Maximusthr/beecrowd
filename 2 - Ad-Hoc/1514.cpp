#include <bits/stdc++.h>

using namespace std;

// ninguem resolveu todos os problemas
// todo problema foi resolvido por pelo menos uma pessoa
// não há nenhum problema resolvido por todos
// todos resolveram ao menos um problema

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int x, y;

    while(cin >> x >> y && (x || y)){
        int vetor[x][y] = {0};


        for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++){
                cin >> vetor[i][j];
            }
        }
        int carac = 0;

        bool resolveu = false;
        int aux = 0;

        // ninguem resolveu todos os problemas
        for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++){
                if (vetor[i][j] == 1) aux++;
                else break;
            }
            if (aux == y) {
                resolveu = true;
                break;
            } else aux = 0;
        }

        if (!resolveu) carac++;


        // todo problema foi resolvido por pelo menos uma pessoa
        bool uma_p = true;
        aux = 0;
        int pos = 0;
        for (int i = 0; i < x; i++){
            for (int j = pos; j < y; j++){
                if (vetor[i][j] == 0){
                    i++;
                    j--;
                    if (i >= x) {
                        uma_p = false;
                        break;
                    }
                }
                else {
                    i = -1;
                    pos = ++j;
                    break;
                }
            }
        }
        if (uma_p) carac++;

        // não há nenhum problema resolvido por todos
        aux = 0;
        bool todos = false;
        pos = 0;
        int nada = 0;
        for (int i = 0; i < x; i++){
            for (int j = pos; j < y; nada++){
               if (vetor[i][j] == 1){
                    aux++;
                    i++;
                    if (aux == x){
                        todos = true;
                        break;
                    }
               }
               else {
                    i = -1;
                    pos++;
                    aux = 0;
                    break;
               }
            }
            if (todos) break;
        }
        if (!todos) carac++;
        
        // todos resolveram ao menos um problema
        aux = 0;
        for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++){
                if (vetor[i][j] == 1) {
                    aux++;
                    i++;
                    j = -1;
                    if (i >= x) break;
                }
            }
        }
        if (aux == x) carac++;


        cout << carac << "\n";
    }
}
