#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    string aux;
    while(getline(cin, aux)){
        int soma = 0;
        for (int i = 0; i < (int)aux.size(); i++){
            if (aux[i] == ' ') continue;
            else if ((aux[i] >= 65 && aux[i] <= 90) && soma % 2 == 1){
                aux[i] += 32;
                soma++;
            }
            else if ((aux[i] >= 97 && aux[i] <= 122) && soma % 2 == 0){
                aux[i] -= 32;
                soma++;
            } else soma++;
        }

        cout << aux << "\n";
    }
}
