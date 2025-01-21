#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        string nome;
        int forca;

        cin >> nome >> forca;

        if (nome == "Thor") cout << "Y" << "\n";
        else cout << "N" << "\n";
    }
}
