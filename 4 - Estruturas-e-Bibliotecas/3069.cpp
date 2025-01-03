#include <bits/stdc++.h>

using namespace std;

typedef struct{
    int ini;
    int fim;
} sorvete;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    int m, qtd;
    int casos = 1;
    while (cin >> m >> qtd){
        if (casos > 1) cout << "\n";
        if (m == 0) break;

        vector<sorvete> trab;

        for (int i = 0; i < qtd; i++){
            int x, y; cin >> x >> y;
            trab.push_back({x, y});
        }

        sort(trab.begin(), trab.end(), [&](sorvete &x, sorvete &y){
            if (x.ini != y.ini) return x.ini < y.ini;
            if (x.fim != y.fim) return x.fim < y.fim;
        });


        int menor = trab[0].ini;
        int maior = trab[0].fim;


        cout << "Teste " << casos << "\n";


        for (int i = 1; i < (int)trab.size(); i++){
            if (trab[i].ini > maior) {
                cout << menor << " " << maior << "\n";
                menor = trab[i].ini;
                maior = trab[i].fim;
            } else if (trab[i].fim > maior){
                maior = trab[i].fim;
            }
        }
        cout << menor << " " << maior << "\n";
       
        casos++;
    }
}
