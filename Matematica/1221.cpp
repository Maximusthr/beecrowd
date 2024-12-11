#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    while(qtd--){
        int x; cin >> x;

        if (x <= 1) {
            cout << "Not Prime" << "\n";
            continue;
        }
        
        if (x <= 3) {
            cout << "Prime" << "\n";
            continue;
        }

        if (x % 2 == 0 || x % 3 == 0){
            cout << "Not Prime" << "\n";
            continue;
        }

        bool ok = true;
        for (int i = 5; i*i <= x; i++){
            if (x % i == 0){
                ok = false;
                cout << "Not Prime" << "\n";
                break;
            }
        }
        if (ok) cout << "Prime" << "\n";
    }
}
