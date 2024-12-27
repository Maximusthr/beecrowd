#include <bits/stdc++.h>

using namespace std;

int main(){
    double soma = 0;
    for (int i = 1; i <= 100; i++){
        soma += (double)1/(double)i;
    }

    cout << fixed << setprecision(2);
    cout << soma << "\n";
}
