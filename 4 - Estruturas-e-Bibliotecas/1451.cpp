#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    string x;

    while(cin >> x){
        bool home = false;

        string aux;
        string complemento;
        string inicio;

        stack<string> pilha;

        for (int i = 0; i < (int)x.size(); i++){
            if (x[i] != '[' && x[i] != ']') {

                if (i == (int)x.size()-1 && home){
                    complemento += x[i];
                    pilha.push(complemento);
                    break;
                }

                if (home) complemento += x[i];
                else aux += x[i];
            }
            else if (x[i] == '['){
                if (home){
                    pilha.push(complemento); 
                    complemento.clear();
                }
                home = true;
            }
            else if (x[i] == ']'){
                if (home) {
                    pilha.push(complemento);
                    complemento.clear();
                    home = false;
                }
            }
        }

        string juncao;
        while (!pilha.empty()){
            juncao += pilha.top();
            pilha.pop();
        }

        juncao += aux;

        if ((int)juncao.size() > 0) cout << juncao << "\n";
    }

}
