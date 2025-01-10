#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int d, vf, vg; 

    while (cin >> d >> vf >> vg){
        
        double d_g = sqrt((144)+(d*d));

        double t_f = (double)12/vf;
        double t_g = (double)d_g/vg;


        cout << (t_g <= t_f ? "S" : "N");
        cout << "\n";

    }
}
