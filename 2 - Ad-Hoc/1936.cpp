#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> fatorial(10, 1);

    fatorial[0] = 1;
    for (int i = 1; i < 10; i++){
        fatorial[i] = i * fatorial[i-1];
    }

    int x; cin >> x;

    int soma = 0;
    for (int i = (int)fatorial.size()-1; i >= 0; i--){
        if (fatorial[i] <= x) {
            x -= fatorial[i];
            soma++;
            i++;
        }
    }

    cout << soma << "\n";
}
