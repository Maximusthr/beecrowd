#include <bits/stdc++.h>

using namespace std;

int main(){
    double matriz[12][12];
    char c; cin >> c;

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> matriz[i][j];
        }
    }

    double soma = 0, aux = 0;
    for (int i = 10; i >= 0; i--){
        for (int j = 0; j < 12; j++){
            if (i + j == 11) break;
            soma += matriz[i][j];
            aux++;
        }
    }

    cout << fixed << setprecision(1);
    switch(c){
        case 'S':
            cout << soma << "\n";
            break;
        case 'M':
            cout << soma/aux << "\n";
            break;
    }
}
