#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    double soma = 0;
    while(qtd--){
        double x, y; cin >> x >> y;

        if (x == 1001) soma += (1.50*y);
        else if (x == 1002) soma += (2.50*y);
        else if (x == 1003) soma += (3.5*y);
        else if (x == 1004) soma += (4.50*y);
        else if (x == 1005) soma += (5.5*y);
    }

    cout << fixed << setprecision(2) << soma << "\n";
}
