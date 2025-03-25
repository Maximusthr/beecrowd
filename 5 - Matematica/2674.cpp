#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+5;
vector<bool> isPrime(MAX, 1);

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    // crivo de eratóstenes
    for (int64_t i = 2; i <= MAX; i++){
        if (!isPrime[i]) continue;
        
        for (int64_t j = i * i; j <= MAX; j += i){
            isPrime[j] = false;
        }
    }
    
    isPrime[0] = false;
    isPrime[1] = false;
    
    int x;
    while(cin >> x){

        if (!isPrime[x]) cout << "Nada" << "\n";
        else {
            int aux = x;
            bool ok = true;

            while (aux > 0){
                int temp = aux % 10;
                if (!isPrime[temp]){
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
