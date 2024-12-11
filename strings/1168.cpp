#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    
    for (int i = 0; i < qtd; i++){
        int soma = 0;
        string aux; cin >> aux;
        vector<char> palavra;
        for (int j = 0; j < (int)aux.size(); j++){
            switch(aux[j]){
                case '1': soma += 2;
                          break;
                case '2': soma += 5;
                          break;
                case '3': soma += 5;
                          break;
                case '4': soma += 4;
                          break;
                case '5': soma += 5;
                          break;
                case '6': soma += 6;
                          break;
                case '7': soma += 3;
                          break;
                case '8': soma += 7;
                          break;
                case '9': soma += 6;
                          break;
                case '0': soma += 6;
                          break;
            }
        }
        cout << soma << " leds" << "\n";
    }
}
