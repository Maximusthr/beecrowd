#include <bits/stdc++.h>

using namespace std;

int main(){
    double matriz[12][12];

    int x; cin >> x;
    getchar();
    char oper; cin >> oper;

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> matriz[i][j];
        }
    }

    cout << fixed << setprecision(1);
    double soma = 0;

    switch(oper){
        case 'S':
            for (int i = 0; i < 12; i++){
                soma += matriz[x][i];
            }
            cout << soma << "\n";
            break;
        case 'M':
            for (int i = 0; i < 12; i++){
                soma += matriz[x][i];
            }
            cout << soma/12 << "\n";
            break;
    }
}
