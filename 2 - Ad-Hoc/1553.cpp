#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;

    while(cin >> n >> k && (n || k)){
        map<int, int> perguntas;

        for (int i = 0; i < n; i++){
            int aux; cin >> aux;
            perguntas[aux]++;
        }  

        int soma = 0;

        for (auto [x, y] : perguntas){
            if (y >= k) soma++;
        }
        
        cout << soma << "\n";

    }    
}
