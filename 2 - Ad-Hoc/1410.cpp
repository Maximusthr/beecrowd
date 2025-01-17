#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y; 
    while(cin >> x >> y && (x || y)){
        
        vector<int> atac;
        vector<int> defes;

        for (int i = 0; i < x; i++){
            int aux; cin >> aux;
            atac.push_back(aux);
        }

        for (int i = 0; i < y; i++){
            int aux; cin >> aux;
            defes.push_back(aux);
        }

        sort(atac.begin(), atac.end());
        sort(defes.begin(), defes.end());

        if (atac[0] == defes[0] && atac[0] == defes[1]) cout << "N" << "\n";
        else if (atac[0] >= defes[1]) cout << "N" << "\n";
        else cout << "Y" << "\n";

    }
}
