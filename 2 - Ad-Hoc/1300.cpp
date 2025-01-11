#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int x;

    while(cin >> x){
        cout << (x % 6 == 0 ? "Y" : "N") << "\n";
    }
}
