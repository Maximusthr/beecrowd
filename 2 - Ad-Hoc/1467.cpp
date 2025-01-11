#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int a, b, c;

    while(cin >> a >> b >> c){
        vector<int> num;
        num.push_back(a);
        num.push_back(b);
        num.push_back(c);

        int soma = 0;
        for (int i = 0; i < 3; i++){
            if (num[i] == 1) soma++;
        }

        if (soma == 0 || soma == 3) cout << "*";
        if (soma == 1){
            int pos = 0;
            for (int i = 0; i < 3; i++){
                if (num[i] == 1) pos = i;
            }

            if (pos == 0) cout << "A";
            else if (pos == 1) cout << "B";
            else if (pos == 2) cout << "C";
        }
        if (soma == 2){
            int pos = 0;
            for (int i = 0; i < 3; i++){
                if (num[i] == 0) pos = i;
            }

            if (pos == 0) cout << "A";
            else if (pos == 1) cout << "B";
            else if (pos == 2) cout << "C";
        }

        cout << "\n";
    }
}
