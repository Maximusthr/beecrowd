#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int a, b;

    while(cin >> a >> b && (a || b)){
        set<int> conj_a;
        for (int i = 0; i < a; i++){
            int aux; cin >> aux;
            conj_a.insert(aux);
        }
        queue<int> ana;
        for (auto &x : conj_a){
            ana.push(x);
        }

        set<int> conj_b;
        for (int i = 0; i < b; i++){
            int aux; cin >> aux;
            conj_b.insert(aux);
        }
        queue<int> beatriz;
        for (auto &x : conj_b){
            beatriz.push(x);
        }

        int soma = 0, tam = 0;
        //busca binaria
        while ((int)ana.size() != 0 && (int)beatriz.size() != 0){
            if ((int)ana.size() >= (int)beatriz.size()){
                if (ana.front() != beatriz.front()){
                    if (tam == (int)ana.size()) {
                        soma++;
                        tam = 0;
                        ana.pop();
                        beatriz.pop();
                        continue;
                    }
                    int aux = ana.front();
                    ana.pop();
                    ana.push(aux);
                    tam++;
                } else {
                    ana.pop();
                    beatriz.pop();
                }
            }
            else {
                if (ana.front() != beatriz.front()){
                    if (tam == (int)beatriz.size()) {
                        soma++;
                        tam = 0;
                        ana.pop();
                        beatriz.pop();
                        continue;
                    }
                    int aux = beatriz.front();
                    beatriz.pop();
                    beatriz.push(aux);
                    tam++;
                } else {
                    ana.pop();
                    beatriz.pop();
                }
            }
        }

        cout << soma << "\n";

    }
}
