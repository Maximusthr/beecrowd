#include <bits/stdc++.h>

using namespace std;

long long fatorial(long long x){
    if (x == 0) return 1;
    if (x == 1) return x;
    return x*fatorial(x-1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long x, y;

    while(cin >> x >> y){
        long long z = fatorial(x) + fatorial(y);
        cout << z << "\n";
    }
}
