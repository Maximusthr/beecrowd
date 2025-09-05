#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    int n, k; cin >> n >> k;

    vector<int> arr(k);
    for (auto &i : arr) cin >> i;

    vector<bool> dp(n+1);

    dp[n] = true;
    for (int i = 0; i < k; i++){
        for (int j = arr[i]; j <= n; j++){
            if (dp[j]){
                dp[j-arr[i]] = true;
            }
        }
    }

    if (dp[0]) cout << "S" << "\n";
    else cout << "N" << "\n";
}