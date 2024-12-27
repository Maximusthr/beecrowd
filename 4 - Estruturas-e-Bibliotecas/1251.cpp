#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    string x;

    int aux = 1;
    while(cin >> x){
        if (aux != 1) cout << "\n";
        map<int, int> ascii;

        for (int i = 0; i < x.size(); i++){
            ascii[x[i]]++;
        }

        vector<pair<int, int>> vetor;

        for(auto[x, y] : ascii){
            vetor.push_back({x, y});
        }

        sort(vetor.begin(), vetor.end(), [&](pair<int, int> &x, pair<int, int> &y){
            if (x.second != y.second) return x.second < y.second;
            return x.first > y.first;
        });

        for (int i = 0; i < vetor.size(); i++){
            cout << vetor[i].first << " " << vetor[i].second << "\n";
        }

        aux++;
    }
}
