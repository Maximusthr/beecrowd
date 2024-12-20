#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 10;
    int vetor[10] = {0};
    int i = 0;
    while(x--){
        int aux; cin >> aux;
        if (aux <= 0) vetor[i] = 1;
        else vetor[i] = aux;
        i++;
    }

    for (int i = 0; i < 10; i++){
        cout << "X[" << i << "] = " << vetor[i] << "\n";
    }
}
