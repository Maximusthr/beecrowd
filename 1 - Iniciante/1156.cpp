#include <bits/stdc++.h>

using namespace std;

int main(){
    double soma = 0;
    int aux = 1;
    for (int i = 1; i <= 38; i+=2){
        if (i == 1) soma += (double)(i);
        else soma += (double)(i)/(double)(aux);
        aux *= 2;
    }

    cout << fixed << setprecision(2);
    cout << soma << "\n";
}
