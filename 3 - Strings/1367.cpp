#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd;

    while(cin >> qtd && qtd){
        cin.ignore();

        map<char, int> incorreto;
        map<char, int> correto;
        int soma = 0;
        int min = 0;

        for (int i = 0; i < qtd; i++){
            char letra; int tempo; string julg;
            cin >> letra >> tempo >> julg;

            if (julg == "incorrect"){
                incorreto[letra]++;
            } 
            else {
                correto[letra] += tempo;
                soma++;
            }
        }

        for (auto [x, y] : correto){
            min += incorreto[x]*20;
            min += y;
        }
        cout << soma << " " << min << "\n";
    }   
}
