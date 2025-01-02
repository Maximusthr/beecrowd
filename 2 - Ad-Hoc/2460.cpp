#include <bits/stdc++.h>

using namespace std;

const int MAX = 50010;

vector<int> fila(MAX);

int main(){
    int n; cin >> n;
    vector<int> aux;

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        fila[x] = 1;
        aux.push_back(x);
    }

    int num; cin >> num;
    for (int i = 0; i < num; i++){
        int y; cin >> y;
        fila[y] = 0;
    }
    
    int soma = 0;
    for (int i = 0; i < (int)aux.size(); i++){
        if (fila[aux[i]]) {
            soma++;
            if (soma == n-num) cout << aux[i] << "\n";
            else cout << aux[i] << " ";
        }
    }
}
