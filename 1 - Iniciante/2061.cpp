#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;

    for (int i = 0; i < m; i++){
        string aux; cin >> aux;

        if (aux == "fechou") n++;
        if (aux == "clicou") n--;
    }

    cout << n << "\n";
}
