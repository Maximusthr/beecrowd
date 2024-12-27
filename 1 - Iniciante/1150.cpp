#include <bits/stdc++.h>

using namespace std;

int main(){
    int x; cin >> x;
    int z = x;
    while (z <= x) cin >> z;

    int soma = 1;
    int aux = x+1;
    while (x <= z){
        x += aux;
        soma++;
        aux++;
    }

    cout << soma << "\n";
}
