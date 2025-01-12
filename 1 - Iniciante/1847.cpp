#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y, z; cin >> x >> y >> z;

    if (x > y && y <= z) cout << ":)";
    else if (x < y && y >= z) cout << ":(";
    else if (x < y && y < z && (y-x > z-y)) cout << ":(";
    else if (x < y && y < z && (z-y >= y-x)) cout << ":)";
    else if (x > y && y > z && (y-z < x-y)) cout << ":)";
    else if (x > y && y > z && (y-z >= x-y)) cout << ":(";
    else if (x == y && y < z) cout << ":)";
    else if (x == y && y >= z) cout << ":(";

    cout << "\n";
}
