#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    
    int comp; cin >> comp;

    set<int> num;

    for (int i = 0; i < comp; i++){
        int x; cin >> x;
        num.insert(x);
    }

    cout << qtd-(int)num.size() << "\n";
}
