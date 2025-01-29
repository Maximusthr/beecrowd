#include <bits/stdc++.h>

using namespace std;

int main(){
    string senha;

    while(getline(cin, senha)){
        bool M = false;
        bool min = false;
        bool num = false;
        bool valido = true;


        if ((int)senha.size() < 6 || (int)senha.size() > 32){
            cout << "Senha invalida." << "\n";
        }
        else {
            for (int i = 0; i < (int)senha.size(); i++){
                if (senha[i] == ' '){
                    valido = false;
                    break;
                }
                else if (senha[i] >= 65 && senha[i] <= 90) M = true;
                else if (senha[i] >= 97 && senha[i] <= 122) min = true;
                else if (senha[i] >= 48 && senha[i] <= 57) num = true;
                else {
                    // simbolo
                    valido = false;
                    break;
                }
            }
            
            if (M && min && num && valido) cout << "Senha valida.\n";
            else cout << "Senha invalida.\n";
        }
    }
}