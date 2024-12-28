#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1, y1, x2, y2;

    while (cin >> x1 >> y1 >> x2 >> y2 && (x1 || x2 || y1 || y2)){
        if (x1 == x2 && y1 == y2) cout << 0 << "\n";
        else if (x1 == x2 || y1 == y2) cout << 1 << "\n";
        else {
            bool ok = false;
            if (x2 < x1 && y2 < y1){
                while(x2 <= x1 && y2 <= y1){
                    if (x2 == x1 && y2 == y1) ok = true;
                    x2++;
                    y2++;
                }
            } 
            else if (x2 > x1 && y2 > y1){
                while (x2 >= x1 && y2 >= y1){
                    if (x2 == x1 && y2 == y1) ok = true;
                    x2--;
                    y2--;
                }
            }
            else if (x2 > x1 && y2 < y1){
                while (x2 >= x1 && y2 <= y1){
                    if (x2 == x1 && y2 == y1) ok = true;
                    x2--;
                    y2++;
                }
            }
            else if (x2 < x1 && y2 > y1){
                while (x2 <= x1 && y2 >= y1) {
                    if(x2 == x1 && y2 == y1) ok = true;
                    x2++;
                    y2--;
                }
            }

            cout << (ok ? "1" : "2") << "\n";
        }
    }
}
