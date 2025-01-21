#include <bits/stdc++.h>

using namespace std;

int main(){
    double x, y; cin >> x >> y;

    double valor = ((y-x) * 100)/x;

    cout << fixed << setprecision(2) << valor << "%" << "\n";
}
