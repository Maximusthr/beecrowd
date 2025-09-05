#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    int n; cin >> n;

    vector<int> arr(n);
    for (auto &i : arr) cin >> i;

    int ans = INF;

    for (int i = 1; i <= 6; i++){
        int aux = 0;
        for (int j = 0; j < n; j++){
            if (arr[j] == i) continue;
            if (arr[j] + i == 7) aux += 2;
            else aux++;
        }

        ans = min(ans, aux);
    }

    cout << ans << "\n";
}