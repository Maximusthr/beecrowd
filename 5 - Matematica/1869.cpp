#include <bits/stdc++.h>

using namespace std;

char base[32] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F',
    'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V'};
    
void b32(unsigned long long x){
    vector<int> arr;
        
    if (x < 32) {
        cout << base[x] << "\n";
        return;
    }

    while(x >= 32){
        arr.push_back(x % 32);
        x /= 32;
    }
    arr.push_back(x);

    for (int i = (int)arr.size()-1; i >= 0; i--){
        cout << base[arr[i]];
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    unsigned long long x; 
    while(cin >> x && x){
        b32(x);
    }
    cout << 0 << "\n";
}
