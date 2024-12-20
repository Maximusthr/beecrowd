#include <bits/stdc++.h>

using namespace std;

int main(){
    string x, y;

    while(cin >> x >> y){
        if (x[0] == '0' && y[0] == '0') break;
        string z;
        
        for (int i = 0; i < (int)y.size(); i++){
            if (y[i] != x[0]) z += y[i];
        }

        bool ok = false;

        // verificando 0s a esquerda
        string aux;
        bool esquerda = false;
        for (int i = 0; i < (int)z.size(); i++){
            if (z[i] == '0' && !esquerda) continue;
            else {
                esquerda = true;
                aux += z[i];
            } 
        }
        z = aux;

        for (int i = 0; i < (int)z.size(); i++){
            if (z[i] != '0'){
                ok = true;
                break;
            }
        }

        if (!ok) z = '0';
        
        cout << z << "\n";
    }
}   
