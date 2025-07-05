#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    int n, m; cin >> n >> m;

    vector<int> func(n);
    for (auto &i : func) cin >> i;

    vector<int> c(m);
    for (auto &i : c) cin >> i;

    vector<int> aux(n);
    
    for (int i = 0; i < m; i++){
        int id = 0;
        int menor = INF;
        for (int j = 0; j < n; j++){
            if (menor > aux[j]){
                menor = aux[j];
                id = j;
            }
        }
        aux[id] += (func[id] * c[i]);
    }

    int maior = 0;
    for (int i = 0; i < n; i++){
        maior = max(maior, aux[i]);
    }

    cout << maior << "\n";
}