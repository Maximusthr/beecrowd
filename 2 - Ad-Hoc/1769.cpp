#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    string x;

    while(cin >> x){
        vector<int> num;

        for (int i = 0; i < (int)x.size(); i++){
            if (x[i] >= 48 && x[i] <= 57){
                num.push_back(x[i]-'0');
            }
        }

        int b1 = num[9];
        int aux = 0;
        for (int i = 0; i < (int)num.size()-2; i++)
            aux += num[i] * (i+1);
        
        bool ok = true;
        if (aux % 11 == 10) aux = 0;
        else aux %= 11;
        if (aux != b1) ok = false;

        if (ok){
            int b2 = num[10];
            aux = 0;
            for (int i = 0, j = 9; i < (int)num.size()-2; i++, j--){
                aux += num[i] * j;
            }

            if (aux % 11 == 10) aux = 0;
            else aux %= 11;
            if (aux != b2) cout << "CPF invalido\n";
            else cout << "CPF valido\n";
        }
        else cout << "CPF invalido\n";
    }
}
