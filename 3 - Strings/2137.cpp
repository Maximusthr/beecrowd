#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    while (cin >> x){
        vector<string> cod;

        for (int i = 0; i < x; i++){
            string aux; cin >> aux;
            cod.push_back(aux);
        }

        sort(cod.begin(), cod.end());

        for (auto &i : cod){
            cout << i << "\n";
        }
    }
}