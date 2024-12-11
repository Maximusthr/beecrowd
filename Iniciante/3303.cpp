#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    string x;
    while(cin >> x){
        if ((int)x.size() >= 10) cout << "palavrao\n" ;
        else cout << "palavrinha\n";
    }
}
