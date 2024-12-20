#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y; cin >> x >> y;
    int aux = 0;

    for (int i = 1; i <= y; i++){
        if (aux == x-1) {
            cout << i << "\n";
            aux = 0;
        }
        else {
            cout << i << " ";
            aux++;
        }
    }
}
