#include <bits/stdc++.h>

using namespace std;

const int MAX = 6e5+1;
vector<bool> prime(MAX, true);

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    // crivo
    prime[1] = false;
    for (long long i = 2; i <= MAX; i++){
        if (!prime[i]) continue;
        for (long long j = i * i; j <= MAX; j += i){
            prime[j] = false;
        }
    }

    int x; cin >> x;

    int c = 0;
    int dist = 0;
    while(c < 10){
        if (prime[x]){
            dist += x;
            c++;
        }
        x++;
    }

    cout << dist << " km/h" << "\n";
    int h = 60000000/dist;
    cout << h << " h / " << h/24 << " d" << "\n";

}
