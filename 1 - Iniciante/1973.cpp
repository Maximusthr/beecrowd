#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int qtd; cin >> qtd;

    long long array[qtd];
    long long carneiros = 0;
    for (int i = 0; i < qtd; i++){
        cin >> array[i];
        carneiros += array[i];
    }
    
    long long ataque = 0;

    int pos = 0;
    for (int i = 0; i < qtd; i++){
        if (array[i] % 2 == 1){
            carneiros--;
            array[i]--;
            ataque++;
            pos = i+1;
        }
        else if (array[i] % 2 == 0){
            if (array[i] == 0){
                i -= 2;
                if (i < -1) break;
                else continue;
            }
            if (i == pos) ataque++;
            carneiros--;
            array[i]--;
            i-= 2;
            if (i < -1) break;
        }
    }

    cout << ataque << " " << carneiros << "\n";
}  
