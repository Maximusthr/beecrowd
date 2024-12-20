#include <bits/stdc++.h>

using namespace std;

int main(){
    cout << fixed << setprecision(1);
    int qtd; cin >> qtd;

    while(qtd--){
        double x, y, z; cin >> x >> y >> z;

        double media = ((2*x)+(3*y)+(5*z))/(10);

        cout << media << "\n";
    }
}
