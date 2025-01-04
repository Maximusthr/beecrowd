#include <bits/stdc++.h>

using namespace std;

int main(){
    //ios_base::sync_with_stdio(0); cin.tie(NULL);
    int x, y, z; 
    while (cin >> x >> y >> z){
        cin.ignore();
        int pag = 1;
        string frase; getline(cin, frase);

        vector<string> palavras;

        string aux2;
        for (int i = 0; i < (int)frase.size(); i++){
            if (frase[i] != ' ' || (i == (int)frase.size()-1)){
                aux2 += frase[i];
                if (i == (int)frase.size()-1) palavras.push_back(aux2);
            } else if (frase[i] == ' ') {
                palavras.push_back(aux2);
                aux2 = {};
            }
        }

        int aux = 0;
        int linha = 0;
        for (int i = 0; i < (int)palavras.size(); i++){
            aux += (int)palavras[i].size();
            if (i != (int)palavras.size()-1) aux++; // caractere de espaço
            if (aux >= z){
                linha++;
                aux -= z;
            }
            if (linha == y){
                linha = 0;
                pag++;
            }

            if (i == (int)palavras.size()-1 && aux != 0 && aux < (int)palavras[i].size()) pag--;
        }

        cout << pag << "\n";
    }
}
