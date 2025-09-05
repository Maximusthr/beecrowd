#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e6 + 5;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    int n; cin >> n;

    vector<int> arr(n);
    for (auto &i : arr) cin >> i;

    vector<int> freq(MAX);

    int ans = 0;
    for (int i = 0; i < n; i++){
        if (!freq[arr[i]]) {
            ans++;
            if (arr[i] == 1) continue;
            freq[arr[i]-1]++;
        }
        else {
            freq[arr[i]]--;
            if (arr[i] == 1) continue;
            freq[arr[i]-1]++;
        }
    }

    cout << ans << "\n";
}