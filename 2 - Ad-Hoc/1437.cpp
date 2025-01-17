#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    string rosas = "NLSO";

    while(cin >> x && x){
        string y; cin >> y;

        string ans;
        int pos = 0;
        for (int i = 0; i < x; i++){
            if (y[i] == 'D') {
                if (pos+1 >= (int)rosas.size()){
                    pos = 0;
                    ans = rosas[pos];
                } else {
                    ans = rosas[pos+1];
                    pos++;
                }
            }
            else if (y[i] == 'E'){
                if (pos == 0){
                    pos = 3;
                    ans = rosas[pos];
                } else {
                    ans = rosas[pos-1];
                    pos--;
                }
            }
        }

        cout << ans << "\n";
    }
}
