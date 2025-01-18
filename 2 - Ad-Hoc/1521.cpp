#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int x;

    while(cin >> x && x){
        int vetor[x+1];

        for (int i = 1; i <= x; i++){
            cin >> vetor[i];
        }

        int inicio; cin >> inicio;
        bool encontrado = false;

        int pos = inicio;
        while(!encontrado){
            if (vetor[pos] == pos) {
                cout << pos << "\n";
                encontrado = true;
                break;
            }
            else pos = vetor[pos];
        }
    }
}
