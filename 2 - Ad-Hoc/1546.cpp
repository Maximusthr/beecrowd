#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        int x; cin >> x;

        for (int j = 0; j < x; j++){
            int aux; cin >> aux;

            switch(aux){
                case 1:
                    cout << "Rolien";
                    break;
                case 2:
                    cout << "Naej";
                    break;
                case 3:
                    cout << "Elehcim";
                    break;
                case 4:
                    cout << "Odranoel";
                    break;
            }

            cout << "\n";
        }
    }
}