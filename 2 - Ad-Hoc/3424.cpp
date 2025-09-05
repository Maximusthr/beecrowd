#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    int n; cin >> n;

    string s; cin >> s;

    int ans = 0;
    int aux = 0;
    bool ok = false;
    for (int i = 1; i < n; i++){
        if (s[i] == s[i-1] && s[i] == 'a'){
            aux++;
        }
        else if (aux > 0) {
            ans += aux + 1;
            aux = 0;
        }
    }

    if (aux > 0){
        ans += aux+1;
    }

    cout << ans << "\n";
} 