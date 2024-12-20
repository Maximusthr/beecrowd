#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    cin.ignore();
    
    while(qtd--){
        string x; getline(cin, x);

        string palavra = {};

        for (int i = 0; i < (int)x.size(); i++){
            if (i == 0 && x[i] != ' ') palavra += x[i];
            if (x[i] == ' ' && x[i+1] != ' ' && i+1 < (int)x.size()){
                palavra += x[i+1];
            }
        }
        cout << palavra << "\n";
    }
}
