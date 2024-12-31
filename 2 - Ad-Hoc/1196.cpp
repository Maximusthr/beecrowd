#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    string linha_um = "`1234567890-=";
    string linha_dois = "QWERTYUIOP[]\\";
    string linha_tres = "ASDFGHJKL;'";
    string linha_quatro = "ZXCVBNM,./";

    string x;
    
    while(getline(cin, x)){
        string frase(x);
        
        for (int i = 0; i < (int)x.size(); i++){
            if (x[i] == ' ') {
                frase[i] = x[i];
                continue;
            }
            for (int j = 0; j < (int)linha_um.size(); j++){
                if (x[i] == linha_um[j]){
                    x[i] != '`' ? frase[i] = linha_um[j-1] : frase[i] = linha_um[j];
                    break;
                }
                else if (x[i] == linha_dois[j] && j < 13){
                    x[i] != 'Q' ? frase[i] = linha_dois[j-1] : frase[i] = linha_dois[j];
                    break;
                } 
                else if (x[i] == linha_tres[j] && j < 12){
                    x[i] != 'A' ? frase[i] = linha_tres[j-1] : frase[i] = linha_tres[j];
                    break;
                }
                else if (x[i] == linha_quatro[j] && j < 11){
                    x[i] != 'Z' ? frase[i] = linha_quatro[j-1] : frase[i] = linha_tres[j];
                    break;
                }
            }
        }

        int tamanho = (int)frase.size();
        for (int i = 0; i < tamanho; i++){
            cout << frase[i];
        }
        cout << "\n";
    }
}
