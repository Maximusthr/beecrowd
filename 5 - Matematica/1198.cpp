#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    long long x, y;
    while(cin >> x >> y){
        if (y > x){
            long long aux = x;
            x = y;
            y = aux;
        }
        cout << x-y << "\n";
    }
}
