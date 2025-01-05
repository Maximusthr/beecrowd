#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    cin.ignore();
    for (int i = 0; i < qtd; i++){
        string x, y; cin >> x >> y;

        if (x == y) cout << "empate";
        else if (x == "tesoura" && y == "spock") cout << "sheldon";
        else if (x == "spock" && y == "tesoura") cout << "rajesh";

        else if (x == "lagarto" && y == "spock") cout << "rajesh";
        else if (x == "spock" && y == "lagarto") cout << "sheldon";

        else if (x == "tesoura" && y == "papel") cout << "rajesh";
        else if (x == "papel" && y == "tesoura") cout << "sheldon";

        else if (x == "papel" && y == "pedra") cout << "rajesh";
        else if (x == "pedra" && y == "papel") cout << "sheldon";

        else if (x == "pedra" && y == "lagarto") cout << "rajesh";
        else if (x == "lagarto" && y == "pedra") cout << "sheldon";

        else if (x == "lagarto" && y == "spock") cout << "rajesh";
        else if (x == "spock" && y == "lagarto") cout << "sheldon";

        else if (x == "tesoura" && y == "lagarto") cout << "rajesh";
        else if (x == "lagarto" && y == "tesoura") cout << "sheldon";

        else if (x == "lagarto" && y == "papel") cout << "rajesh";
        else if (x == "papel" && y == "lagarto") cout << "sheldon";

        else if (x == "papel" && y == "spock") cout << "rajesh";
        else if (x == "spock" && y == "papel") cout << "sheldon";

        else if (x == "spock" && y == "pedra") cout << "rajesh";
        else if (x == "pedra" && y == "spock") cout << "sheldon";

        else if (x == "pedra" && y == "tesoura") cout << "rajesh";
        else if (x == "tesoura" && y == "pedra") cout << "sheldon";

        cout << "\n";
    }    
}
