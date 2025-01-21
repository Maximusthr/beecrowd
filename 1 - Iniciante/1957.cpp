#include <bits/stdc++.h>

using namespace std;

int main(){
    int x; cin >> x;

    string valores;
    while (x > 0){
        int valor = x % 16;
        x /= 16;
        if (valor == 10){
            valores += 'A';
        }
        else if (valor == 11){
            valores += 'B';
        }
        else if (valor == 12){
            valores += 'C';
        }
        else if (valor == 13){
            valores += 'D';
        }
        else if (valor == 14){
            valores += 'E';
        }
        else if (valor == 15){
            valores += 'F';
        }
        else valores += valor + '0';
    }

    for (int i = (int)valores.size()-1; i >= 0; i--){
        cout << valores[i];
    }

    cout << "\n";
}
