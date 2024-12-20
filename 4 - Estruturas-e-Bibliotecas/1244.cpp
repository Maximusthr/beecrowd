#include <bits/stdc++.h>

using namespace std;

bool ordenar(string x, string y){
    return x.size() < y.size();
}

int main(){
    int x; cin >> x;
    cin.ignore();

    for (int i = 0; i < x; i++){
        vector<string> v;
        vector<string> v2;
        string aux; getline(cin, aux);
        string y;
        for (int j = 0; j < (int)aux.size(); j++){
            if (aux[j] == ' ' || j == aux.size()-1){
                if (j == aux.size()-1) y += aux[j];
                v.push_back(y);
                v2.push_back(y);
                y = "";
            } else {
                y += aux[j];
            }
        }

        sort(v.rbegin(), v.rend(), ordenar);

        for (int k = 0; k < (int)v.size(); k++){
            cout << v[k] << " ";
        }
        cout << "\n";
    }
}
