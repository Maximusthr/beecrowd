#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    string x;

    while (getline(cin, x)){
        string num;
        string aux;
        bool valido = false;

        for (int i = 0; i < (int)x.size(); i++){
            if ((x[i] >= '0' && x[i] <= '9') || x[i] == 'l' || x[i] == 'O' || x[i] == 'o' || x[i] == ',' || x[i] == ' ') {
                valido = true;
            } else {
                    valido = false;
                    break;
                }
            if (i == (int)x.size()-1){
                if (x[i] >= '0' && x[i] <= '9') aux += x[i];
                else if (x[i] == 'l') aux += '1';
                else if(x[i] == 'O' || x[i] == 'o') aux += '0';

                num = aux;
            } else {
                if (x[i] >= '0' && x[i] <= '9') aux += x[i];
                else if (x[i] == 'l') aux += '1';
                else if(x[i] == 'O' || x[i] == 'o') aux += '0';
            }
        }

        long long numero = 0;
        long long multip = 1;
        ((int)num.size() == 0 ? valido = false : valido = true);
        for (int i = (int)num.size()-1; i >= 0; i--){
            if (!valido) break;
            numero += (num[i] - '0')*multip;
            multip *= 10;
        }

        if (!valido) cout << "error" << "\n";
        else if (numero > 2147483647 || numero < 0) cout << "error" << "\n";
        else cout << numero << "\n";
    }
}
