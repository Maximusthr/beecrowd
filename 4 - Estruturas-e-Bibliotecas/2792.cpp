#include <bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional> // for less 
using namespace __gnu_pbds; 

typedef tree<int, null_type, less<int>, rb_tree_tag, 
            tree_order_statistics_node_update> 
    ordered_set; 

using ll = long long;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    int n; cin >> n;

    vector<int> arr(n);
    for (auto &i : arr) cin >> i;

    ordered_set v;
    for (int i = 0; i < n; i++){
        int aux = v.order_of_key(arr[i]);

        cout << arr[i] - aux << " \n"[i==n-1];
        v.insert(arr[i]);
    }
}