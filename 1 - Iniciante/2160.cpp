#include <bits/stdc++.h>

using namespace std;

int main(){
    string palavra;
    getline(cin, palavra);

    cout << ((int)palavra.size() > 80 ? "NO" : "YES") << "\n";
}