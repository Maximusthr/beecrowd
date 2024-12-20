#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        string x; cin >> x;
        if ((int)x.size() == 5) cout << "3" << "\n";
        else if ((x[0] == 'o' && x[1] == 'n' || x[0] == 'o' && x[2] == 'e' || x[1] == 'n' && x[2] == 'e')) cout << "1" << "\n";
        else cout << "2" << "\n";
    }
}
