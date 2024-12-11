#include <bits/stdc++.h>

using namespace std;


int mdc(int x, int y){
    if (y == 0) return x;
    return mdc(y, x % y);
}

int main(){
    int qtd; cin >> qtd;

    while(qtd--){
        int x, y; cin >> x >> y;
        int aux = y;
        y = x;
        x = aux;
        cout << mdc(x, y) << "\n";
    }
}
