#include <bits/stdc++.h>

using namespace std;


int rafael(int x, int y){
    return (3*x)*(3*x) + y*y;
}

int beto(int x, int y){
    return 2*(x*x) + (5 * y)*(5 * y);
}

int carlos(int x, int y){
    return -100*x + y*y*y;
}

int main(){
    int qtd; cin >> qtd;

    while (qtd--){
        int x, y; cin >> x >> y;

        if (rafael(x, y) > beto(x, y) && rafael(x, y) > carlos(x, y)) cout << "Rafael ganhou" << "\n";
        else if (beto(x, y) > rafael(x, y) && beto(x, y) > carlos(x, y)) cout << "Beto ganhou" << "\n";
        else cout << "Carlos ganhou" << "\n";
    }   
}
