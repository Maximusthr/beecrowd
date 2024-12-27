#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    int a = 0;
    for (int i = 0; i < qtd; i++){
        if (a != 0) cout << "\n";
        int x, y; cin >> x >> y;

        vector<pair<int, int>> vetor; 

        for (int i = 0; i < y; i++){
            int aux; cin >> aux;
            int res = aux % x;

            pair<int, int> par = {res, aux};

            vetor.push_back(par);
        }

        for (int i = 0; i < x; i++){
            cout << i << " -> ";

            for (int j = 0; j < (int)vetor.size(); j++){
                if (vetor[j].first == i) cout << vetor[j].second << " -> ";
            }    
            cout << "\\\n";
        }
        a++;
    }
}
