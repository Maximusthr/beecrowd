#include <bits/stdc++.h>

using namespace std;

int main(){
    int x; cin >> x;

    while (x--){
        string y; cin >> y;
        int qtd; cin >> qtd;

        string new_y;
        
        for (int i = 0; i < (int)y.size(); i++){
            if (y[i]-qtd < 65){
                new_y += y[i]-qtd+26;
            } else new_y += y[i]-qtd;
        }
        cout << new_y << "\n";
    }
}
