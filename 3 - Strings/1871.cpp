#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    long long x, y; 
    
    while (cin >> x >> y && (x || y)){
        long long soma = x + y;

        vector<char> teste;
        while (soma > 0){
            long long aux = soma % 10;
            soma /= 10;
            teste.push_back(aux + '0');
        }

        for (int i = (int)teste.size()-1; i >= 0; i--){
            if (teste[i] == '0') continue;
            else cout << teste[i];
        }
        cout << "\n";
    }
}
