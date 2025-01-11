#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y;

    while(cin >> x >> y){
        int qtd = 0;
        for (int i = x; i <= y; i++){
            int aux = i;
            map<int, int> num;
            while(aux > 0){
                num[aux%10]++;
                aux /= 10;   
            }

            int soma = 0;
            for (auto[x, y] : num){
                if (y >= 2) {
                    soma++;
                    break;
                }
            }

            if (soma == 0) qtd++;
        }

        cout << qtd << "\n";
    }
}
