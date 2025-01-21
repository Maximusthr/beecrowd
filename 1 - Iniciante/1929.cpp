#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d; cin >> a >> b >> c >> d;

    bool ok = false;
    bool fim = false;

    int aux = 0;
    while(!fim){
        if (aux == 0){ // a b c
            if (a + b <= c || a + c <= b || b + c <= a){
                aux++;
                continue;
            } else {
                ok = true;
                break;
            }
        } 
        else if (aux == 1){ // a b d
            if (a + b <= d || a + d <= b || b + d <= a){
                aux++;
                continue;
            } else{
                ok = true;
                break;
            }
        }
        else if (aux == 2){ // a c d
            if (a + c <= d || a + d <= c || c + d <= a){
                aux++;
                continue;
            } else {
                ok = true;
                break;
            }
        }
        else if (aux == 3){ // b c d
            if (c + b <= d || c + d <= b || b + d <= c){
                aux++;
                fim = true;
            } else {
                ok = true;
                break;
            }
        }
    }

    if (ok) cout << "S" << "\n";
    else cout << "N" << "\n";
}
