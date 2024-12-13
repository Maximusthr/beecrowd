#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd;

    while(cin >> qtd && qtd){

        int zeros = 0, uns = 0;
        
        for (int i = 0; i < qtd; i++){
            int x; cin >> x;
            (x == 1 ? uns++ : zeros++);
        }

        cout << "Mary won " << zeros << " times and John won " << uns << " times\n";
    }
}
