#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y; cin >> x >> y;

    if (x > y && y <= 2 || x >= 0 && y <= 2) cout << "nova";
    else if (x < y && y >= 3 && y <= 96 ) cout << "crescente";
    else if (y >= 97 && y <= 100) cout << "cheia"; // entre 97 e 100
    else if (x > y && y >= 3 && y <= 96) cout << "minguante";
    cout << "\n";
}
