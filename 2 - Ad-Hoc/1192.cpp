#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    while(qtd--){
        int x, y;
        char z;

        cin >> x >> z >> y;

        if (x == y) cout << x*y << "\n";
        else if (z >= 65 && z <= 90) cout << y-x << "\n";
        else cout << x+y << "\n";
    }
}
