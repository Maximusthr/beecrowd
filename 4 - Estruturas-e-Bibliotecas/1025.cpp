#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd, casos;

    int cases = 1;
    while(cin >> qtd >> casos && qtd && casos){
        vector<int> num;
        for (int i = 0; i < qtd; i++){
            int aux; cin >> aux;
            num.push_back(aux);
        }
        cout << "CASE# " << cases << ":\n";
        sort(num.begin(), num.end());
        for (int i = 0; i < casos; i++){
            int aux; cin >> aux;
            bool ok = false;
            for (int j = 0; j < (int)num.size(); j++){
                if (aux == num[j]){
                    cout << aux << " found at " << j+1 << "\n";
                    ok = true;
                    break;
                }
            }
            if (!ok) cout << aux << " not found\n";
        }
        cases++;
    }
}
