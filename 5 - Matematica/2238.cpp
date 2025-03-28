#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;

    if (a == b || c == d || c % a != 0) cout << -1 << "\n";
    else {
        int index = a + a;
        while(index < c){
            if (index % b == 0 || d % index == 0) {
                index += a;
                continue;
            }
            if (c % index == 0) {
                cout << index << "\n";
                break;
            }
            index += a;
       }
    }
}
