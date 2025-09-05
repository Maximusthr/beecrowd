#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    while(cin >> t && t){
        map<ll, ll> mapa;
        for (int i = 0; i < t; i++){
            ll x; cin >> x;
            mapa[x]++;
        }

        vector<ll> arr;
        for (auto [x, y] : mapa){
            if (y % 2) arr.push_back(x);
        }

        cout << arr[0] << " " << arr[1] << "\n";
    }
}