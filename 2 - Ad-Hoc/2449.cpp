#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;

    vector<int> tam(n);
    
    for (auto &x : tam) cin >> x;

    int soma = 0;
    for (int i = 0; i < (int)tam.size(); i++){
        if (tam[i] != m){
            while (tam[i] < m){
                tam[i]++;
                if (i != (int)tam.size()-1) tam[i+1]++;
                soma++;
            }
            while (tam [i] > m){
                tam[i]--;
                if (i != (int)tam.size()-1) tam[i+1]--;
                soma++;
            }
        }
    }

    cout << soma << "\n";
}
