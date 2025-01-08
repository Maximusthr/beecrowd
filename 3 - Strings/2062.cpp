#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    cin.ignore();
    
    string x;
    getline(cin, x);
    
    int soma = 0;
    for (int i = 0; i < (int)x.size(); i++){
        if (x[i] == ' ' || i == (int)x.size()-1){
            if (i == (int)x.size()-1) soma++;
            if (soma == 3){

                if (i == (int)x.size()-1) {
                    if (x[i-2] == 'O' && x[i-1] == 'B') {
                        x[i] = 'I';
                    }
                    if (x[i-2] == 'U' && x[i-1] == 'R'){
                        x[i] = 'I';
                    }
                }

                if (x[i-3] == 'O' && x[i-2] == 'B') {
                    x[i-1] = 'I';
                }
                if (x[i-3] == 'U' && x[i-2] == 'R'){
                    x[i-1] = 'I';
                }

                soma = 0;
            } else soma = 0;
        }
        else if (x[i] != ' ') soma++;
    }

    cout << x << "\n";
}
