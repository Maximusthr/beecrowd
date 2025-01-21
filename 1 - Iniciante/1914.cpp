#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        pair<string, string> nome_x;
        pair<string, string> nome_y;

        string primeiro, tipo, segundo, tipo2;
        cin >> primeiro >> tipo >> segundo >> tipo2;

        nome_x = {primeiro, tipo};
        nome_y = {segundo, tipo2};

        long long num1, num2; cin >> num1 >> num2;

        long long soma = num1+num2;

        if (soma % 2 == 0) {
            if (nome_x.second == "PAR") cout << nome_x.first << "\n";
            else cout << nome_y.first << "\n";
        } else {
            if (nome_x.second == "IMPAR") cout << nome_x.first << "\n";
            else cout << nome_y.first << "\n";
        }
    }
}
