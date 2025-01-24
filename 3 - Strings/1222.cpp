#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int n, l, c; 
    while (cin >> n >> l >> c){
        vector<string> palavras;
        for (int i = 0; i < n; i++){
            string aux; cin >> aux;
            palavras.push_back(aux);
        }

        int linha = 0;
        int carac = 0;
        int pag = 0;
        for (int i = 0; i < (int)palavras.size(); i++){
            if ((int)palavras[i].size() + carac <= c){
                carac += (int)palavras[i].size();
                // espaço
                if (carac + 1 <= c){
                    carac++;
                }
                if (carac == c){
                    linha++;
                    carac = 0;
                }
            }
            else {
                linha++;
                carac = 0;
                i--;
            }

            if (linha == l){
                pag++;
                linha = 0;
            }

            if (i == (int)palavras.size()-1){
                if (carac > 0 || linha > 0) pag++;
            }
        }

        cout << pag << "\n";
    }
}
