#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int x;
    while(cin >> x){
        vector<int> largada;
        for (int i = 0; i < x; i++){
            int aux; cin >> aux;
            largada.push_back(aux);
        }
        
        vector<int> chegada;
        for (int i = 0; i < x; i++){
            int aux; cin >> aux;
            chegada.push_back(aux);
        }

        int ultrapassagem = 0;
        for (int i = 0, k = 0; i < x; i++){
            if (largada[k] != chegada[i]){
                for (int j = k; j < x; j++){
                    if (largada[j] != chegada[i]) {
                        int temp = largada[k];
                        largada[k] = largada[j];
                        largada[j] = temp;
                        ultrapassagem++;
                    }
                    else {
                        int temp = largada[k];
                        largada[k] = largada[j];
                        largada[j] = temp;
                        break;
                    }
                }
            }
            k++;
        }

        cout << ultrapassagem << "\n";

    }
}
