#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    string aux;
    while(cin >> aux){
        stack<char> pilha;
        bool finish = true;
        for (int i = 0; i < (int)aux.size(); i++){
            if ((aux[i] == '(')) pilha.push(aux[i]);
            else if ((aux[i] == ')') && (!pilha.empty())) pilha.pop();
            else if ((aux[i] == ')') && (pilha.empty())){
                cout << "incorrect" << "\n";
                finish = false;
                break;
            }
        }
        if (finish) cout << ((pilha.empty()) ? "correct" : "incorrect") << "\n";
    }
}
