#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    for (int i = 0; i < qtd; i++){
        int x; cin >> x;
        map<string, double> alimentos;

        for (int j = 0; j < x; j++){
            string a;
            double b;
            cin >> a >> b;
            alimentos[a] += b;
        }

        int y; cin >> y;
        map<string, int> quantidade;
        for (int k = 0; k < y; k++){
            string a; double b;
            cin >> a >> b;
            quantidade[a] += b;
        }
        
        double soma = 0;
        for (auto[x, y] : alimentos){
            for (auto[a, b] : quantidade){
                if (x == a) soma += y*b;
            }
        }

        cout << fixed << setprecision(2); 
        cout << "R$ " << soma << "\n";
    }
}
