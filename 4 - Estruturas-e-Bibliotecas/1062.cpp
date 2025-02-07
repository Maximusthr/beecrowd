#include <bits/stdc++.h>
using namespace std;

bool verif(stack<int> &fila, int num){
    int tam = (int)fila.size();
    for (int i = 0; i < tam; i++){
        if (num == fila.top()){
            return true;
        }
        else {
            int temp = fila.top();
            fila.push(temp);
            fila.pop();
        }
    }
    return false;
}

int main() {
	int qtd;
	while(cin >> qtd && qtd){
        while (true){
            stack<int> fila;
            bool fim = false;
            for (int i = 0; i < qtd; i++){
                int aux; cin >> aux;
                if (aux == 0) {
                    fim = true;
                    cout << "\n";
                    break;
                }
                fila.push(aux);
            }
            if (fim) break;
            stack<int> original;
            for (int i = 1; i <= qtd; i++){
                original.push(i);
            }
            stack<int> espera;
            
            bool ok = true;
            while(!fila.empty()){
                if (!original.empty() && (fila.top() == original.top())){
                    original.pop();
                    fila.pop();
                }
                else if (!espera.empty() && fila.top() == espera.top()){
                    espera.pop();
                    fila.pop();
                }
                else {
                    if (verif(espera, fila.top())) {
                        ok = false;
                        break;
                    }
                    else{
                        espera.push(original.top());
                        original.pop();
                    }
                }
            }
            
            cout << (ok ? "Yes" : "No") << "\n";
        }
	}
}
