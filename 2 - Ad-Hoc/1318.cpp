#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y;

    map<int, int> valores;

    while(cin >> x >> y && (x || y)){
        for (int i = 0; i < y; i++){
            int aux; cin >> aux;
            valores[aux]++;
        }
        if (y > x) {
            cout << y-x << "\n";
            break;
        }


    }
}
