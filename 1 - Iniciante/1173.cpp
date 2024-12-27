#include <bits/stdc++.h>

using namespace std;

int main(){
    int vetor[10] = {};

    int x; cin >> x;
    for (int i = 0, aux = 1; i < 10; i++, aux *= 2){
        vetor[i] = x*aux;
        cout << "N[" << i << "] = " << vetor[i] << "\n";
    }
}
