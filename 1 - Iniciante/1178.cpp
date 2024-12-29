#include <bits/stdc++.h>

using namespace std;

int main(){
    double x; cin >> x;

    for (int i = 0; i < 100; i++, x /= 2){
        cout << fixed << setprecision(4);
        cout << "N[" << i << "] = " << x << "\n";
    }
}
