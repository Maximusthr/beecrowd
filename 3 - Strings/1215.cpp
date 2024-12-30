#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    string x;
    vector<string> aux;
    set<string> ordenado;
    while(getline(cin, x)){
        if (x == ""){
            continue;
        }
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        
        string aux2;
        for (int i = 0; i < (int)x.size(); i++){
            if ((x[i] >= 97 && x[i] <= 122) && x[i] != ' ') {
                aux2 += x[i];
                if (i == (int)x.size()-1) {
                    ordenado.insert(aux2);
                    aux2 = {};
                }
            } else {
                 if ((int)aux2.size() == 0) continue;
                ordenado.insert(aux2);
                aux2 = {};
            }
        }
    }
    for (auto x : ordenado){
        cout << x << "\n";
    }

}
