#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> orig(5);
	vector<int> copy(5);
	
	for (int &i : orig) cin >> i;
	for (int &i : copy) cin >> i;
	
	bool ok = true;
	for (int i = 0; i < 5; i++){
		if (orig[i] == copy[i]) {
			ok = false;
			break;
		}
	}
	
	cout << (ok ? "Y" : "N") << "\n";
}