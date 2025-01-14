#include <bits/stdc++.h>

using namespace std;

int main(){
    int num; cin >> num;
    
    int casos = 1;
    for (int i = 0; i < num; i++){

        int n, m; cin >> n >> m;

        queue<int> fila;
        for (int i = 1; i <= n; i++){
            fila.push(i);
        }

        int saltos = m, passos = 1;
        int num_final = 0;

        while ((int)fila.size() != 1){
            if (passos == saltos){
                fila.pop();
                passos = 1;
                if ((int)fila.size() == 1){
                    num_final = fila.front();
                }
            } else {
                int aux = fila.front();
                fila.pop();
                fila.push(aux);
                passos++;
            }
        }

        cout << "Case " << casos << ": " << num_final << "\n";
        casos++;
    }
}
