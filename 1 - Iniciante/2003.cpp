#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, m;
    char carac;

    while(cin >> h >> carac >> m){
        int horario = (8*60);
        int total = (h*60) + m + 60; // 60 atraso maximo
        int dif = total-horario;

        cout << "Atraso maximo: " << (dif >= 0 ? dif : 0) << "\n";
    }
}
