#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;

    while(cin >> x && x){
        vector<int> vetor;
        for (int i = 0; i < x; i++){
            int aux; cin >> aux;

            vetor.push_back(aux);
        }

        int maior = 0;
        int seg_maior = 0;

        for (int i = 0; i < x; i++){
            if (maior < vetor[i]) maior = vetor[i];
        }
        
        int pos = 0;
        for (int i = 0; i < x; i++){
            if (vetor[i] != maior && seg_maior < vetor[i]) {
                seg_maior = vetor[i];
                pos = i+1;
            }
        }

        cout << pos << "\n";
    }
}
