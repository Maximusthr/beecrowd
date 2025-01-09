#include <bits/stdc++.h>

using namespace std;

int main(){
    int x; cin >> x;

    if (x % 2 == 0) cout << (x*x)/2 << " casas brancas e " << (x*x)/2 << " casas pretas\n";
    else cout << ((x*x)/2)+1 << " casas brancas e " << ((x*x)/2) << " casas pretas\n";
}
