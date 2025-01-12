#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int x; 

    while(cin >> x && x){
        vector<char> num;
        vector<char> saida;

        for (int i = 0; i < x; i++){
            char aux; cin >> aux;
            num.push_back(aux);
        }

        for (int i = 0; i < x; i++){
            char aux; cin >> aux;
            saida.push_back(aux);
        }

        string ans;
        stack<char> pilha;
        vector<int> pos;

        for (int i = 0, j = 0; i < x; i++){
            if (!pilha.empty() && pilha.top() == saida[j]){
                ans += 'R';
                pilha.pop();
                pos.push_back(j);
                j++;
                i--;
            } else {
                pilha.push(num[i]);
                ans += 'I';
            }
        }

        bool ok = false;
        bool fim = false;
        if (pilha.empty()) ok = false;
        else {
            for (int i = 0, j = 0; i < (int)saida.size(); i++){
                if ((int)pos.size() > 0 && !fim && i == pos[j]){
                    j++;
                    if (j >= (int)pos.size()) {
                        j = 0;
                        fim = true;
                    }
                    continue;
                }
                else if (pilha.top() == saida[i]) {
                    ans += 'R';
                    pilha.pop();
                } 
                else {
                    cout << ans << " Impossible\n";
                    ok = true;
                    break;
                }
            }
        }
        
        if (!ok) cout << ans << "\n";
    }
}
