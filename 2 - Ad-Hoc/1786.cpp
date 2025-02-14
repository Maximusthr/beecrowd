#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    string x;

    while(cin >> x){
        vector<int> num;

        for (int i = 0; i < (int)x.size(); i++)
            num.push_back(x[i]-'0');

        int aux = 0;
        for (int i = 0; i < (int)num.size(); i++)
            aux += num[i] * (i+1);
        
        if (aux % 11 == 10) aux = 0;
        else aux %= 11;
        num.push_back(aux);

        aux = 0;

        for (int i = 0, j = 9; i < (int)num.size()-1; i++, j--)
            aux += num[i] * j;
        
        if (aux % 11 == 10) aux = 0;
        else aux %= 11;
        num.push_back(aux);

        for (int i = 0; i < (int)num.size(); i++){
            if (i == 3 || i == 6 || i == 9) {
                if (i == 9) cout << "-";
                else cout << ".";
            }
            cout << num[i];
        }
        cout << "\n";
    }  
}
