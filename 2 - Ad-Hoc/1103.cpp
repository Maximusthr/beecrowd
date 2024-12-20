#include <bits/stdc++.h>

using namespace std;

int main(){
    int h1, m1, h2, m2;

    while(cin >> h1 >> m1 >> h2 >> m2 && (h1 || m1 || h2 || m2)){
        int min1 = (h1*60) + m1;
        int min2 = (h2*60) + m2;

        if (h2 < h1 || (h2 == h1 && m2 < m1)){
            min2 += 24*60;
        }

        cout << min2-min1 << "\n";
    }
}
