#include <bits/stdc++.h>

using namespace std;

int main(){
    string frase;

    while(getline(cin >> ws, frase)){
        if ((frase[0] == '*')){
            break;
        } 
        vector<string> aux;
        string todo;
        transform(frase.begin(), frase.end(), frase.begin(), ::tolower);
        for (int i = 0; i < (int)frase.size(); i++){
            if (frase[i] == ' ' || i == (int)frase.size()-1){
                if (i == (int)frase.size()-1) todo += frase[i];
                aux.push_back(todo);
                todo = "";
            } else todo += frase[i];
        }
        bool ok = true;
        for (int i = 1; i < (int)aux.size(); i++){
            if (aux[0][0] != aux[i][0]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "Y" : "N") << "\n";
    }
}
