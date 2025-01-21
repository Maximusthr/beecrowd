#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        int x; cin >> x;

        if (x % 2 == 0) cout << 0 << "\n";
        else cout << 1 << "\n";
    }
}
