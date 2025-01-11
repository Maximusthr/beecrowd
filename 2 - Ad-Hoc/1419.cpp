#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int qtd;

    while(cin >> qtd && qtd){
        vector<int> m;
        vector<int> l;

        for (int i = 0; i < qtd; i++){
            int aux; cin >> aux;
            m.push_back(aux);
        }
        
        for (int i = 0; i < qtd; i++){
            int aux; cin >> aux;
            l.push_back(aux);
        }

        int pontos_m = 0;
        int pontos_l = 0;
        int rep_m = 1;
        int rep_l = 1;

        bool fim = false;

        for (int i = 0; i < qtd; i++){
            if (i > 0 && !fim) {
                if (m[i] == m[i-1]) rep_m++;
                else rep_m = 1;
                if (l[i] == l[i-1]) rep_l++;
                else rep_l = 1;

                if (rep_m == 3 && rep_l == 3){
                    rep_m = 1;
                    rep_l = 1;
                    fim = true;
                }
                else if (rep_m == 3) {
                    pontos_m += 30;
                    rep_m = 1;
                    fim = true;
                }
                else if (rep_l == 3) {
                    pontos_l += 30;
                    rep_l = 1;
                    fim = true;
                }
            }
            pontos_m += m[i];
            pontos_l += l[i];
        }
        if (pontos_m > pontos_l) cout << "M";
        if (pontos_l > pontos_m) cout << "L";
        if (pontos_m == pontos_l) cout << "T";

        cout << "\n";
    }
}
