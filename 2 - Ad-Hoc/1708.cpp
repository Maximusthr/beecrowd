#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y; cin >> x >> y;

    int a = x, b = y;

    int voltas = 1;
    while (y - x < b){
        x += a;
        y += b;
        voltas++;
    }

    cout << voltas << "\n";
}
