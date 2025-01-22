#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int qtd;

    while(cin >> qtd && qtd){
        map<long long, long long> num;
        for (int i = 0; i < qtd; i++){
            long long aux; cin >> aux;
            num[aux]++;
        }

        for (auto [x, y] : num){
            if (y % 2 == 1) cout << x << "\n";
        }
    }
}
