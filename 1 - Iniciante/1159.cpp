#include <bits/stdc++.h>

using namespace std;

int main(){
    int x; 

    while(cin >> x && x){
        int soma = 0;
        if (x % 2 != 0) x++;
        for (int i = 0; i < 5; i++){
            soma += x;
            x += 2;
        }

        cout << soma << "\n";
    }
}
