#include <bits/stdc++.h>

using namespace std;

int n, c, t;
vector<int> pipoca(n);

bool possivel(long long chute){
    int comp = 1;
    long long restante = t * chute;
    for (int i = 0; i < n; i++){
        if (restante >= pipoca[i]){
            restante -= pipoca[i];
        } else{
            restante = t * chute;
            comp++;
            i--;
        }
        if (comp > c) return 0;
    }

    return 1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    cin >> n >> c >> t;

    for (int i = 0; i < n; i++){
        int aux; cin >> aux;
        pipoca.push_back(aux);
    }
   
    int ini = 0, fim = 1e9+1;
    while(ini < fim){
        int meio = (ini) + ((fim-ini))/2;

        if (!possivel(meio)){
            ini = meio+1;
        } else {
            fim = meio;
        }
    }

    cout << ini << "\n";
}
