#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string planeta;
    int ano;
    int tempo;
} mensagem;

int main(){
    int qtd; 
    
    while (cin >> qtd && qtd){
        vector<mensagem> mensagens;
        for (int i = 0; i < qtd; i++){
            string aux1;
            int aux2, aux3;
            cin >> aux1 >> aux2 >> aux3;
            
            mensagens.push_back({aux1, aux2, aux3});
        }

        sort(mensagens.begin(), mensagens.end(), [&](mensagem &x, mensagem &y){
            return ((x.ano-x.tempo) < (y.ano-y.tempo));
        });

        cout << mensagens[0].planeta << "\n";
    }
}
