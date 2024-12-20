#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    cin.ignore();

    while(qtd--){
        string x; getline(cin, x);
        string a = {};
        string b = {};
        bool ok = true;
        for (int i = 0; i < (int)x.size(); i++){
            if (x[i] == ' '){
                ok = false;
                continue;
            } else if (ok) {
                a += x[i];
            }
            if (!ok) b += x[i];
        }

        string c = {};
        for (int i = 0, j = 0; i < (int)x.size(); i++, j++){
            if (i < (int)a.size()) c += a[i];
            if (j < (int)b.size()) c += b[j];
        }
        cout << c << "\n";
    }
}
