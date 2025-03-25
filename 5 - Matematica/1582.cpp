#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int x, y, z;

    while(cin >> x >> y >> z){

        if (pow(max(x, max(y, z)), 2) != pow(x, 2) + pow(y, 2) + pow(z, 2) - pow(max(x, max(y,z)), 2)){
            cout << "tripla" << "\n";
            continue;
        } 

        if (__gcd(x, y) == 1 && __gcd(y, z) == 1) {
            cout << "tripla pitagorica primitiva" << "\n";
        } 
        else cout << "tripla pitagorica" << "\n";
    }
}
