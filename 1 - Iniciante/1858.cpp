#include <bits/stdc++.h>

using namespace std;

int main(){

    int x; cin >> x;

    int menor = 21, pos = 0;
    for (int i = 0; i < x; i++){
        int aux; cin >> aux;
        if (aux < menor) {
            menor = aux;
            pos = i;
        }
    }
    
    cout << pos+1 << "\n";
}
