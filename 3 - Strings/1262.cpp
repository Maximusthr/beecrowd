#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    string x;
    while (cin >> x){
        int processos; cin >> processos;
        int operacoes = 0;

        int aux = 0;
        for (int i = 0; i < (int)x.size(); i++){
            if (x[i] == 'R') aux++;
            else if (x[i] == 'W') {
                operacoes++;
                if (aux != 0){
                    operacoes++;
                    aux = 0;
                }
            }
            if (aux == processos || (aux >= 1 && i == (int)x.size()-1)){
                operacoes++;
                aux = 0;
            }
        }    
        cout << operacoes << "\n";
    }
}
