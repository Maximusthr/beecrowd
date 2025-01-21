#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        int x; cin >> x;

        int ano = 0;

        if (x > 2014) {
            ano = x - 2014;
            cout << ano << " A.C." << "\n";
        } else {
            ano = 2014 - x + 1;
            cout << ano << " D.C." << "\n";
        }
    }
}
