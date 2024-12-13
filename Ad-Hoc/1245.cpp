#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int qtd;

    while(cin >> qtd && qtd){
        map<pair<int, char>, int> nums;

        for (int i = 0; i < qtd; i++){
            int x; cin >> x;
            char y; cin >> y;
            nums[{x, y}]++;
        }
        
        int soma = 0, menor = 0;
        for (auto[x, y] : nums){
            for (auto[a, b]: nums){
                if (x.first == a.first && x.second != a.second){
                    if (y >= b) menor = b;
                    else menor = y;
                    soma += menor;
                }
            }
        }
        cout << soma/2 << "\n";
    }
}
