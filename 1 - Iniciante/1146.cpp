#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    while(cin >> x && x){
        for (int i = 1; i <= x; i++){
            if (i == x){
                cout << i << "\n";
            } else {
                cout << i << " ";
            }
        }
    }
}
