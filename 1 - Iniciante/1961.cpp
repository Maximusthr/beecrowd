#include <bits/stdc++.h>

using namespace std;

int main(){
    int p, n; cin >> p >> n;

    vector<int> vetor;
    for (int i = 0; i < n; i++){
        int aux; cin >> aux;
        vetor.push_back(aux);
    }

    bool ok = true;
    for (int i = 0; i < n; i++){
        if (i+1 >= n) break;
        if (vetor[i] + p < vetor[i+1] || (vetor[i] - vetor[i+1] > p) ) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YOU WIN" : "GAME OVER") << "\n";
}
