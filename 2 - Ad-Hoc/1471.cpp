#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    int n, r;

    while (cin >> n >> r){
        vector<int> pessoas;
        for (int i = 0; i < r; i++){
            int aux; cin >> aux;
            pessoas.push_back(aux);
        }

        if (n == r) cout << "*";
        else {
            sort(pessoas.begin(), pessoas.end());
            vector<int> mortos;
            for (int i = 0, j = 1; i < r; i++){
                if (j == pessoas[i]) j++;
                else {
                    mortos.push_back(j);
                    j++;
                    i--;
                }
            }

            if (pessoas[(int)pessoas.size()-1] < n){
                int num = pessoas[(int)pessoas.size()-1];
                while (num != n){
                    mortos.push_back(num+1);
                    num++;
                }
            }

            for (int i = 0; i < (int)mortos.size(); i++){
                cout << mortos[i] << " ";
            }
        }

        cout << "\n";
    }
}
