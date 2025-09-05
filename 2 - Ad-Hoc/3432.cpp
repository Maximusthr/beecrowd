#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    for (int i = 0; i < 8; i++){
        int x; cin >> x;
        if (x > 1) {
            cout << "F" << "\n";
            return 0;
        }
    }

    cout << "S" << "\n";
}