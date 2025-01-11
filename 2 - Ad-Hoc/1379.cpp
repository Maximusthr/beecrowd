#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y;

    while(cin >> x >> y && (x || y)){
        //(x+y+z)/3 = y;

        int z = (3*x) - x - y;
        cout << z << "\n";
    }   
}
