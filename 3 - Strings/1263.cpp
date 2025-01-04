#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    string x;

    while(getline(cin, x)){
        int soma = 0;
        int aux = 0;

        transform(x.begin(), x.end(), x.begin(), ::tolower);

        vector<string> palavras;
        
        string c;
        for (int i = 0; i < (int)x.size(); i++){
            if (x[i] != ' ' || i == (int)x.size()-1){
                c += x[i];
                if (i == (int)x.size()-1) palavras.push_back(c);
            } else if (x[i] == ' '){
                palavras.push_back(c);
                c = {};
            }
        }

        char letra = palavras[0][0];
        for (int i = 1; i < (int)palavras.size(); i++){
            if (letra == palavras[i][0]){
                aux++;
                if (aux == 1) soma++;
            }
            else if (letra != palavras[i][0]) {
                letra = palavras[i][0];
                aux = 0;
            }
        }

        cout << soma << "\n";
    }
}
