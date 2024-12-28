#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<double> x;
    int a = 0;
    while(a != 100){
        double aux; cin >> aux;
        x.push_back(aux);
        a++;
    }

    for (int i = 0; i < (int)x.size(); i++){
        cout << fixed << setprecision(1);
        if (x[i] <= 10) cout << "A[" << i << "] = " << x[i] << "\n";
    }
}
