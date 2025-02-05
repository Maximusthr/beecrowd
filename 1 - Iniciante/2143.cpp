#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd;

    while(cin >> qtd && qtd){
        for (int i = 0; i < qtd; i++){
            int x; cin >> x;
            if (x % 2 == 0) cout << x*2 - 2 << "\n";
            else cout << x*2 - 1 << "\n";
        }
    }
}
