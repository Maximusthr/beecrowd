#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        int x, y; cin >> x >> y;

        vector<int> num;
        vector<int> dif;
        for (int j = 0; j < x; j++){
            int aux; cin >> aux;
            num.push_back(aux);
            dif.push_back(abs(num[j]-y));
        }

        int menor = 101;
        for (int j = 0; j < x; j++){
            if (menor > dif[j]) menor = dif[j];
        }

        int pos = 0;
        for (int j = 0; j < x; j++){
            if (menor == dif[j]) {
                pos = j+1;
                break;
            }
        }

        cout << pos << "\n";
    }
}
