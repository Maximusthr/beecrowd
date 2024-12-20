#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;

    while(cin >> x && x){
        int a, b;
        int maior = 0, menor = 0;
        for (int i = 0; i < x; i++){
            cin >> a >> b;
            if (a > b) maior++;
            else if (a < b) menor++;
        }

        cout << maior << " " << menor << "\n";
    }
}
