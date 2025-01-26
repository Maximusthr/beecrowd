#include <bits/stdc++.h>

using namespace std;

#define MAX 100010
int numeros[MAX];
int aux[MAX];

long long merge_sort(int ini, int fim){
    if (ini == fim) return 0;

    int inversoes = merge_sort(ini, (ini+fim)/2) + merge_sort((ini+fim)/2+1, fim);

    int pos = 0;
    int j = (ini+fim)/2+1;
    for (int i = ini; i <= (ini+fim)/2; i++){

        while (j <= fim && numeros[j] < numeros[i]){
            aux[pos] = numeros[j];
            pos++;
            j++;
            inversoes += (ini+fim)/2-i+1;
        }

        aux[pos] = numeros[i];
        pos++;
    }

    while (j <= fim){
        aux[pos] = numeros[j];
        pos++;
        j++;
    }

    for (int i = ini; i <= fim; i++) numeros[i] = aux[i-ini];
    return inversoes;
}

int main(){
    int qtd;
    
    while(cin >> qtd && qtd){
        for (int i = 1; i <= qtd; i++){
            cin >> numeros[i];
        }

        long long trocas = merge_sort(1, qtd);
        
        if (trocas % 2 == 0) cout << "Carlos" << "\n";
        else cout << "Marcelo" << "\n";

    }
}

