#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd;

    while (cin >> qtd && qtd){
        int x, y; cin >> x >> y;
        for (int i = 0; i < qtd; i++){
            int x1, y1; cin >> x1 >> y1;
            if (x1 == x || y1 == y) cout << "divisa" << "\n";
            else if (x1 > x && y1 > y) cout << "NE" << "\n";
            else if (x1 > x && y1 < y) cout << "SE" << "\n";
            else if (x1 < x && y1 > y) cout << "NO" << "\n";
            else if (x1 < x && y1 < y) cout << "SO" << "\n";
        }
    }
}
