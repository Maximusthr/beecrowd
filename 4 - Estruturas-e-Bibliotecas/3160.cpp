#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    string lista;
    getline(cin, lista);
    
    vector<string> nome;
    string aux;
    for (int i = 0; i < (int)lista.size(); i++){
        if (lista[i] == ' ' || i == (int)lista.size()-1){
            if (i == (int)lista.size()-1) aux += lista[i];
            nome.push_back(aux);
            aux = { };
        }
        else aux += lista[i];
    }
    
    string novo;
    getline(cin, novo);
    vector<string> dif_nome;
    for (int i = 0; i < (int)novo.size(); i++){
        if (novo[i] == ' ' || i == (int)novo.size()-1){
            if (i == (int)novo.size()-1) aux += novo[i];
            dif_nome.push_back(aux);
            aux = { };
        }
        else aux += novo[i];
    }
    
    string indicado;
    getline(cin, indicado);
    
    vector<string> nova_lista;

    bool ok = false;
    bool fim = false;
    int temp = 0;
    int i = 0;
    
    bool indic = false;
    if (indicado == "nao") {
        indic = true;
        for (int i = 0; i < (int)nome.size(); i++){
            nova_lista.push_back(nome[i]);
        }
        for (int i = 0; i < (int)dif_nome.size(); i++){
            nova_lista.push_back(dif_nome[i]);
        }
    }
    
    bool esta = false;
    if (!indic){
        for (int i = 0; i < (int)nome.size(); i++){
            if (indicado == nome[i]) {
                esta = true;
                break;
            }
        }
        if (!esta){
            for (int i = 0; i < (int)nome.size(); i++){
                nova_lista.push_back(nome[i]);
            }
        }
    }
        
    while(!indic && esta){
        if (ok && !fim){
            if (temp == (int)dif_nome.size()) {
                fim = true;
            } else {
                nova_lista.push_back(dif_nome[temp]);
                temp++;
            }
        }
        if (fim) {
            if (i == (int)nome.size()) break;
            nova_lista.push_back(nome[i]);
            i++;
        }
        
        if (nome[i] == indicado && !ok){
            ok = true;
        } else if (!ok) {
            nova_lista.push_back(nome[i]);
            i++;
        }
    }
    
    for (int i = 0; i < (int)nova_lista.size(); i++){
        if (i == (int)nova_lista.size()-1) cout << nova_lista[i] << "\n";
        else cout << nova_lista[i] << " ";
    }
}
