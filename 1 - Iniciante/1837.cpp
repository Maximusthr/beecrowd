#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y; cin >> x >> y;
    int r, q;

    // if (x < 0 && y < 0) r = x % y > 0 ? x % y : abs(y) + x % y;

    // else if (x > 0 && y < 0) r = ((x % y) + abs(y)) % abs(y);

    // else r = ((x % y) + y) % y;

    // q = ((x-r)/y);

    q = x/y;
    r = x % y;

    if (r < 0 && y > 0) {
        r += y;
        q--;
    } else if (r < 0 && y < 0){
        r -= y;
        q++;
    }

    cout << q << " " << r << "\n";
}
