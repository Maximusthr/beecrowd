#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    map<string, int> assassinos;
    map<string, int> morto;

    string aux1, aux2;

    vector<string> nomes;
    
    while(cin >> aux1 >> aux2){
        nomes.push_back(aux1);
        morto[aux2]++;
    }
    
    sort(nomes.begin(), nomes.end());

    for (int i = 0; i < (int)nomes.size(); i++){
        assassinos[nomes[i]]++;
    }   

    cout << "HALL OF MURDERERS\n";

    for (auto [x, y] : assassinos){
        if (morto[x]) continue;
        else cout << x << " " << y << "\n";
    }
}
