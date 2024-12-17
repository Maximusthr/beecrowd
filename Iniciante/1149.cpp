#include <bits/stdc++.h>

using namespace std;

int main(){
    int x; cin >> x;
    int n;

    int soma = x;

    while (true){
        cin >> n;
        if (n <= 0) continue;
        else break;
    }

    for (int i = 1; i <= n-1; i++){
        soma += i + x;
    }

    cout << soma << "\n";
}
