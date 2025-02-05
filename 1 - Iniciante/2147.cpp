#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd;
    cin >> qtd;

    while(qtd--){
        string x; cin >> x;
        int tam = (int)x.size();

        double val = (double) tam;

        cout << fixed << setprecision(2) << val/100 << "\n";
    }
}
