#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;

    for (int i = 0; i < qtd; i++){
        string x; cin >> x;

        queue<char> simb;
        for (int j = 0; j < (int)x.size(); j++){
            if (x[j] == '-' || x[j] == '+' || x[j] == '*' || x[j] == '/' || x[j] == '^' || x[j] == '('
            || x[j] == ')') simb.push(x[j]);
        }

        int inicio = 0;
        string ans;
        deque<char> barra;
        int qtd = 0;
        bool ok = false;
        bool parenteses = false;

        for (int j = 0; j < (int)x.size(); j++){
            if (x[j] == '-' || x[j] == '+' || x[j] == '*' || x[j] == '/' || x[j] == '^' || x[j] == '('
            || x[j] == ')'){
                
                if (simb.front() == '/') {
                    if (parenteses) {
                        barra.push_back(simb.front());
                        simb.pop();
                    } else {
                        simb.push(simb.front());
                        simb.pop();
                    }
                    continue;
                }

                if (simb.front() == '(' || simb.front() == ')'){
                    if(simb.front() == ')') {
                        simb.pop();
                        parenteses = false;
                        if (!barra.empty()) { // imprimir a barra;
                            while (!barra.empty()){
                                ans += barra[0];
                                barra.pop_front();
                            }
                        }
                    } else {
                        parenteses = true;
                        simb.pop();
                    }   
                    continue;
                }

                if (inicio > 0){
                    ans += simb.front();
                    simb.pop();
                }

                inicio++;
            } else {
                ans += x[j];
            }   
            if (j == (int)x.size()-1){
                    while (!simb.empty()){
                        if (simb.front() == ')') {
                            simb.pop();
                            continue;
                        }
                        ans += simb.front();
                        simb.pop();
                    }
            }
        }

        cout << ans << "\n";
    }
}
