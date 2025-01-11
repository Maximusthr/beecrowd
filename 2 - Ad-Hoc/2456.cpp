#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> num;
    for (int i = 0; i < 5; i++){
        int aux; cin >> aux;
        num.push_back(aux);
    }

    vector<int> copia = num;

    sort(num.begin(), num.end());

    bool cresc = false;
    bool decres = false;

    int soma = 0;
    for (int i = 0; i < 5; i++){
        if (copia[i] == num[i]) soma++;
        else break;
    }

    if (soma == 5) cresc = true;

    sort(num.rbegin(), num.rend());
    soma = 0;
    for (int i = 0; i < 5; i++){
        if (copia[i] == num[i]) soma++;
        else break;
    }

    if (soma == 5) decres = true;

    if (cresc) cout << "C";
    else if (decres) cout << "D";
    else cout << "N";

    cout << "\n";
}
