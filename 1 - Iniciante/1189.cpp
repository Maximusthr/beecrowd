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
    int k = 1;

    for (int i = 1; i < 11; i++){
        for (int j = 0; j < k; j++){
            soma += matriz[i][j];
            aux++;
        }
        if (i < 5) k++;
        else if (i > 5) k--;
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
