#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;

    while(cin >> num && num){
        queue<int> fila;
        for (int i = 1; i <= num; i++){
            fila.push(i);
        }

        queue<int> copia = fila;

        int saltos = 1, passos = 1;
        int num_final = 0;

        while(num_final != 13){
            while ((int)copia.size() != 1){
                if (passos == saltos){
                    if (copia.front() == 13) break;
                    copia.pop();
                    passos = 1;
                    if ((int)copia.size() == 1){
                        num_final = copia.front();
                    }
                } else {
                    int aux = copia.front();
                    copia.pop();
                    copia.push(aux);
                    passos++;
                }
            }
            if (num_final == 13) break;
            else {
                copia = fila;
                copia.pop(); // eliminando 1
                saltos++;
                passos = 1;
            }
        }


        cout << saltos << "\n";
    }
}
