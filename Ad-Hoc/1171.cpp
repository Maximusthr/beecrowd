#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd; cin >> qtd;
    map<int, int> nums;

    while(qtd--){
        int x; cin >> x;
        nums[x]++;
    }
    
    for (auto[x, y] : nums){
        cout << x << " aparece " << y << " vez(es)\n";
    }
}
