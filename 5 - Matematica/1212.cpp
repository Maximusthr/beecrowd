#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x, y;
    
    while(cin >> x >> y && (x || y)){
        
        int carry = 0;
        bool ok = false;
        while(x > 0 && y > 0){

            if (x % 10 + y % 10 >= 10) {
                carry++;
                ok = true;
            } else ok = false;
            x /= 10;
            y /= 10;

            int sobra_x = x % 10;
            int sobra_y = y % 10;

            if (ok && sobra_x < 9) x++;
            else if (ok && sobra_y < 9) y++;
        }      

        if (carry == 0) cout << "No carry operation.\n";
        else if (carry == 1) cout << carry << " carry operation.\n";
        else cout << carry << " carry operations.\n";
    }
}
