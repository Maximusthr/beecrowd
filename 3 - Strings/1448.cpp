#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int qtd; cin >> qtd;
    cin.ignore();

    for (int i = 0; i < qtd; i++){
        string x; getline(cin, x);
        string y, z;
        getline(cin, y);
        getline(cin, z);
        
        int soma_y = 0, soma_z = 0;
        int pos_y = -1, pos_z = -1;
        bool igual = true, ok = true;
        
        for (int j = 0; j < (int)x.size(); j++){
            if (pos_y == pos_z) igual = true;
            else {
                igual = false;
                if (ok){
                    if (pos_y < pos_z) pos_y = pos_z + 1; // pos_y trocou
                    else pos_z = pos_y + 1; // pos_z trocou
                    ok = false;
                }
            }

            if (x[j] == y[j]) soma_y++;
            if (x[j] == z[j]) soma_z++;

            if (y[j] != x[j] && igual) pos_y = j;
            if (z[j] != x[j] && igual) pos_z = j;
        }

        cout << "Instancia " << i+1 << "\n";

        if (soma_y > soma_z) cout << "time 1" << "\n";
        else if (soma_y < soma_z) cout << "time 2" << "\n";
        else if (soma_y == soma_z){
            if (pos_y != pos_z) {
                if (pos_y < pos_z) cout << "time 2" << "\n"; // errou primeiro time 1
                else cout << "time 1" << "\n"; // errou segundo time 2
            }
            else cout << "empate" << "\n";
        }

        cout << "\n";
    }
}
