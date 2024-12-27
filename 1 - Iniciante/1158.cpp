#include <bits/stdc++.h>

using namespace std;

int main(){
    int x; cin >> x;

    for (int i = 0; i < x; i++){
        int a, b; cin >> a >> b;
        if (a % 2 == 0) a++;

        int soma = 0;
        for (int j = 0; j < b; j++){
            soma += a;
            a += 2;
        }

        cout << soma << "\n";
    }
}
