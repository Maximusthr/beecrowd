#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int x; 

    while(cin >> x){
        unsigned long long aux = 1;
        int contador = 1;
        while(true){
            if (aux % x == 0){
                cout << contador << "\n";
                break;
            }
            aux *= 10;
            aux++;
            contador++;
            aux %= x;
        }
    }
}
