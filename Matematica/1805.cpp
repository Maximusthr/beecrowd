#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x, y; cin >> x >> y;

    long long soma = 0;

    for (long long i = x; i <= y; i++){
        soma += i;
    }

    cout << soma << "\n";
}
