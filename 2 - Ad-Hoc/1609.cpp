#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        int x; cin >> x;

        set<long long> num;
        for (int j = 0; j < x; j++){
            long long aux; cin >> aux;
            num.insert(aux);
        }

        cout << num.size() << "\n";
    }
}
