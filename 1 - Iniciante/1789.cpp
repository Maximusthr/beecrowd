#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int x;
    while (cin >> x){
        int maior = 0;
        for (int i = 0; i < x; i++){
            int aux; cin >> aux;
            if (aux > maior) maior = aux;
        }

        if (maior >= 20) cout << "3";
        else if (maior >= 10 && maior < 20) cout << "2";
        else cout << "1";
        cout << "\n";
    }
}
