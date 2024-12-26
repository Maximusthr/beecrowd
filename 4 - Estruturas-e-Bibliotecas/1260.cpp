#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    cin.ignore();
    string linha; getline(cin, linha);
    
    for (int i = 0; i < qtd; i++){

        string x;
        map<string, double> arvores;
        double soma = 0;

        while (getline(cin, x) && x != ""){            
            arvores[x]++;
            soma++;
        }
        for (auto[x, y] : arvores){
            cout << fixed << setprecision(4);
            cout << x << " " << (y*100)/soma << "\n";
        }
        if (i != qtd-1) cout << "\n";
    }
}
