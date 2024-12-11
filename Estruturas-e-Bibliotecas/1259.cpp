#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    vector<int> total;

    for (int i = 0; i < qtd; i++){
        int x; cin >> x;

        total.push_back(x);
    }

    vector<int> par;
    vector<int> impar;
    for (int i = 0; i < qtd; i++){
        if (total[i] % 2 == 0) par.push_back(total[i]);
        else impar.push_back(total[i]);
    }

    sort(par.begin(), par.end());
    sort(impar.rbegin(), impar.rend());

    for (int i = 0; i < (int)par.size(); i++){
        cout << par[i] << "\n";
    }

    for (int i = 0; i < (int)impar.size(); i++){
        cout << impar[i] << "\n";
    }
}
