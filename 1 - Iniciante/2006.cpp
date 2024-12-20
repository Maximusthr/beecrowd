#include <bits/stdc++.h>

using namespace std;

int main(){
    int x; cin >> x;

    int y = 5;
    int soma = 0;
    while(y--){
        int aux; cin >> aux;
        if (aux == x) soma++;
    }
    cout << soma << "\n";
}
