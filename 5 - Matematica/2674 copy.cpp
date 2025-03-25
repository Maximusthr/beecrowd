#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x){
    if (x == 0 || x == 1) return false;

    for (int i = 2; i*i <= x; i++){
        if (x % i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int x;
    while(cin >> x){

        if (!isPrime(x)) cout << "Nada" << "\n";
        else {
            int aux = x;
            bool ok = true;

            while (aux > 0){
                int temp = aux % 10;
                if (!isPrime(temp)){
                    cout << "Primo" << "\n";
                    ok = false;
                    break;
                }
                aux /= 10;
            }

            if (ok) cout << "Super" << "\n";
        }
    }
}
