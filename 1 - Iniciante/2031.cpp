#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        string x, y; cin >> x >> y;

        if (x == "ataque" && y == "pedra") cout << "Jogador 1 venceu";
        else if (y == "ataque" && x == "pedra") cout << "Jogador 2 venceu";
        else if (x == "pedra" && y == "papel") cout << "Jogador 1 venceu";
        else if (y == "pedra" && x == "papel") cout << "Jogador 2 venceu";
        else if (x == "ataque" && y == "papel") cout << "Jogador 1 venceu";
        else if (y == "ataque" && x == "papel") cout << "Jogador 2 venceu";
        else if (x == "papel" && y == "papel") cout << "Ambos venceram";
        else if (y == "papel" && x == "papel") cout << "Ambos venceram";
        else if (x == "pedra" && y == "pedra") cout << "Sem ganhador";
        else if (y == "pedra" && x == "pedra") cout << "Sem ganhador";
        else if (x == "ataque" && y == "ataque") cout << "Aniquilacao mutua";
        else if (y == "ataque" && x == "ataque") cout << "Aniquilacao mutua";
        cout << "\n";
    }
}
