#include <bits/stdc++.h>

using namespace std;

int main(){
    int pares[5];
    int impares[5];

    int a = 0, b = 0;
    for (int i = 0; i < 15; i++){
        int x; cin >> x;
        if (x % 2 == 0){
            pares[a] = x;
            a++;
            if (a == 5){
                for (int j = 0; j < 5; j++){
                    cout << "par[" << j << "] = " << pares[j] << "\n";
                }
                a = 0;
            }
        } else {
            impares[b] = x;
            b++;
            if (b == 5){
                for (int k = 0; k < 5; k++){
                    cout << "impar[" << k << "] = " << impares[k] << "\n";
                }
                b = 0;
            }
        }

        if (i == 14){
            if (b > 0){
                for (int c = 0; c < b; c++){
                    cout << "impar[" << c << "] = " << impares[c] << "\n";
                }
            } 
            if (a > 0) {
                for (int d = 0; d < a; d++){
                    cout << "par[" << d << "] = " << pares[d] << "\n";
                }
            }
        }
    }
}
