#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    while(qtd--){
        int x; cin >> x;
        double soma = 1.0/12.0;
        for (int i = 0; i < x; i++){
            soma *= 2;
        }
        cout << (long long)soma/1000 << " kg\n";
    }
}
