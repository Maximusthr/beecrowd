#include <bits/stdc++.h>

using namespace std;

int main(){
    int base;
    while(cin >> base && base){
        queue<int> fila;
        for (int i = 1; i <= base; i++){
            fila.push(i);
        }
        vector<int> aux;
        int x = 0;
        while((int)fila.size() > 1){
            aux.push_back(fila.front());
            fila.pop();
            int y = fila.front();
            fila.push(y);
            fila.pop();
        }
        cout << "Discarded cards: ";
        for (int i = 0; i < (int)aux.size(); i++){
            (i == (int)aux.size()-1) ? cout << aux[i] << "\n" : cout << aux[i] << ", ";
        }
        cout << "Remaining card: " << fila.front() << "\n";
    }
}
