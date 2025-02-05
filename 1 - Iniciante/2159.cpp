#include <bits/stdc++.h>

using namespace std;

int main(){
    int x; cin >> x;

    double menor = (double)x/log(x);
    double maior = 1.25506 * (double)x/log(x);

    cout << fixed << setprecision(1);
    cout << menor << " " << maior << "\n";
}
