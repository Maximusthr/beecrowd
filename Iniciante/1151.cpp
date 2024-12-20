#include <bits/stdc++.h>

using namespace std;


int main(){
    int x; cin >> x;
    int temp = 0;
    vector<int> fib;
    for (int i = 0; i < x; i++){
        if (x == 1) {
            cout << 0 << "\n";
            break;
        }
        else if (x == 2){
            cout << "0 1" << "\n";
            break;
        }
        else {
            if (i == 0) fib.push_back(0);
            else if (i == 1) fib.push_back(1);
            else {
                temp = fib[i-1] + fib[i-2];
                fib.push_back(temp);
            }

            if (i != x-1) cout << fib[i] << " ";
            else cout << fib[i] << "\n";

        }
    }
}
