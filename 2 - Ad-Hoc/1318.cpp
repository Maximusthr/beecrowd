#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y;

    while(cin >> x >> y && (x || y)){
        map<int, int> valores;
        for (int i = 0; i < y; i++){
            int aux; cin >> aux;
            valores[aux]++;
        }   

        int soma = 0;
        for(auto[x, y] : valores){
            if (y >= 2) soma++;
        }

        cout << soma << "\n";
    }
}
