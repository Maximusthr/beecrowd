#include <bits/stdc++.h>

using namespace std;

int main(){
    int dois = 0, tres = 0, quatro = 0, cinco = 0;
    int qtd; cin >> qtd;
    
    vector<int> vetor;
    for (int i = 0; i < qtd; i++){
        int aux; cin >> aux;
        for (int j = 2; j <= 5; j++){
            if (aux % j == 0){
                switch (j){
                    case 2:
                        dois++;
                        break;
                    case 3:
                        tres++;
                        break;
                    case 4:
                        quatro++;
                        break;
                    case 5:
                        cinco++;
                        break;
                }
            }
        }
    }

    cout << dois << " Multiplo(s) de 2" << "\n";
    cout << tres << " Multiplo(s) de 3" << "\n";
    cout << quatro << " Multiplo(s) de 4" << "\n";
    cout << cinco << " Multiplo(s) de 5" << "\n";

}
