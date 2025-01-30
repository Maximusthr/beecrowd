#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int intervalos;

    while(cin >> intervalos){
        vector<int> lista;
        int a, b; 
        for (int i = 0; i < intervalos; i++){
            cin >> a >> b;
            for (int j = a; j <= b; j++){
                lista.push_back(j);
            }
        }

        sort(lista.begin(), lista.end());
        int num; cin >> num;

        if (binary_search(lista.begin(), lista.end(), num)){
            auto par = equal_range(lista.begin(), lista.end(), num);
            cout << num << " found from " << par.first - lista.begin() << " to " << par.second - lista.begin() - 1 << "\n";
        }
        else cout << num << " not found" << "\n";
    }
}
