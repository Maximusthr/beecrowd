#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6+5;
vector<bool> prime(MAX, true);

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    prime[0] = false;
    prime[1] = false;
    for (long long i = 2; i < MAX; i++){
        if (!prime[i]) continue;
        for (long long j = i * i; j < MAX; j += i){
            prime[j] = false;
        }
    }
    
    vector<int> pos(MAX);
    for (int i = 2; i < MAX-2; i++){
        if (prime[i]){
            // é gemeo?
            if (prime[i+2]) pos[i]++;
            else if (prime[i-2]) pos[i]++;
        }
        pos[i] += pos[i-1];
    }

    int t; cin >> t;

    while(t--){
        int x, y; cin >> x >> y;

        if (y < x){
            cout << abs(pos[y-1] - pos[x]) << "\n";
        }
        else cout << abs(pos[y] - pos[x-1]) << "\n";
    }
}
