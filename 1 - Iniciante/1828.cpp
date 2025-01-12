#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    cin.ignore();
    for (int i = 0; i < qtd; i++){
        string x, y; cin >> x >> y;

        cout << "Caso #" << i+1 << ": " ;

        if (x == y) cout << "De novo!";
        else if (x == "tesoura" && y == "Spock") cout << "Raj trapaceou!";
        else if (x == "Spock" && y == "tesoura") cout << "Bazinga!";

        else if (x == "lagarto" && y == "Spock") cout << "Bazinga!";
        else if (x == "Spock" && y == "lagarto") cout << "Raj trapaceou!";

        else if (x == "tesoura" && y == "papel") cout << "Bazinga!";
        else if (x == "papel" && y == "tesoura") cout << "Raj trapaceou!";

        else if (x == "papel" && y == "pedra") cout << "Bazinga!";
        else if (x == "pedra" && y == "papel") cout << "Raj trapaceou!";

        else if (x == "pedra" && y == "lagarto") cout << "Bazinga!";
        else if (x == "lagarto" && y == "pedra") cout << "Raj trapaceou!";

        else if (x == "lagarto" && y == "Spock") cout << "Bazinga!";
        else if (x == "Spock" && y == "lagarto") cout << "Raj trapaceou!";

        else if (x == "tesoura" && y == "lagarto") cout << "Bazinga!";
        else if (x == "lagarto" && y == "tesoura") cout << "Raj trapaceou!";

        else if (x == "lagarto" && y == "papel") cout << "Bazinga!";
        else if (x == "papel" && y == "lagarto") cout << "Raj trapaceou!";

        else if (x == "papel" && y == "Spock") cout << "Bazinga!";
        else if (x == "Spock" && y == "papel") cout << "Raj trapaceou!";

        else if (x == "Spock" && y == "pedra") cout << "Bazinga!";
        else if (x == "pedra" && y == "Spock") cout << "Raj trapaceou!";

        else if (x == "pedra" && y == "tesoura") cout << "Bazinga!";
        else if (x == "tesoura" && y == "pedra") cout << "Raj trapaceou!";

        cout << "\n";
    }    
}
