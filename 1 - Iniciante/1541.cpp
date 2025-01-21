#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, area;

    while(cin >> x){
        if (x == 0) break;
        cin >> y >> area;

        double novo_valor = (double)((100.0/area) * x * y);

        double lado = floor(sqrt(novo_valor));

        cout << floor(lado) << "\n";
    }
}
