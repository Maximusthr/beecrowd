#include <bits/stdc++.h>

using namespace std;

int main(){
    double v, d;
    double pi = 3.14;
    while (cin >> v >> d){
        cout << fixed << setprecision(2);
        double raio = d/2.0;
        double altura = (v/(pi*raio*raio));
        double area = pi * raio * raio;
        
        cout << "ALTURA = " << altura << "\n";
        cout << "AREA = " << area << "\n";
    }
}
