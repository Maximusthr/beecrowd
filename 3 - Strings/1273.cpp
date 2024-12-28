#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd;
    int a = 0; 
    while(cin >> qtd && qtd){
        if (a != 0) cout << "\n";
        vector<string> vetor;

        for (int i = 0; i < qtd; i++){
            string aux; cin >> aux;
            vetor.push_back(aux);
        }
        
        vector<string> copia = vetor;

        sort(copia.begin(), copia.end(), [&](string &x, string &y){
            return (int)x.size() > (int)y.size();
        });

        for (int i = 0; i < (int)vetor.size(); i++){
            cout.width((int)copia[0].size());
            cout << right << vetor[i] << "\n";
        }
        a++;
    }
}
