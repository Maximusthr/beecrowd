#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int qtd;
    cin >> qtd;
    vector<int> popul(qtd);
    
    for (int &i : popul) cin >> i;
    
    int soma = 0;
    int um = 0;
    for (int i = 0; i < qtd; i++){
        if (popul[i] == 0) soma++;
        else um++;
    }
    if (soma > um) cout << "Y";
    else cout << "N";
    cout << "\n";
<<<<<<< HEAD
=======
    
    
>>>>>>> d3990809b2d89886c35f7f0439e9a2981ec7f058
}