#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    string x;

    vector<string> principal;
    vector<string> copia;

    while(getline(cin, x)){
        principal.push_back(x);

        transform(x.begin(), x.end(), x.begin(), ::tolower);
        copia.push_back(x);
    }

    sort(copia.rbegin(), copia.rend());

    for (int i = 0; i < (int)copia[0].size(); i++){
        if (principal[i] )
    }

    cout << copia[0] << "\n";
}
