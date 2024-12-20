#include <bits/stdc++.h>

using namespace std;


int mdc(int x, int y){
    if (y == 0) return x;
    return mdc(y, x % y);
}

void calculo(int x, int y, int z){
    if (x < 0 || y < 0 || z < 0){
        cout << "-" << abs(x/z) << "/" << abs(y/z) << "\n";
    } else cout << x/z << "/" << y/z << "\n";
}

int main(){
    int qtd; cin >> qtd;
    int n1, d1, n2, d2;
    char oper;
    char lixo;
    for (int i = 0; i < qtd; i++){
        cin >> n1 >> lixo >> d1 >> oper >> n2 >> lixo >> d2; // ou scanf
        int n3 = 0, n4 = 0;

        if (oper == '+'){
            n3 = (n1*d2 + n2*d1);
            n4 = (d1 * d2);
            cout << n3 << "/" << n4 << " = ";
            calculo(n3, n4, mdc(n3, n4));
            continue;
        }

        if (oper == '-'){
            n3 = (n1*d2 - n2*d1);
            n4 = (d1 * d2);
            cout << n3 << "/" << n4 << " = ";
            calculo(n3, n4, mdc(n3, n4));
            continue;
        }

        if (oper == '*'){
            n3 = (n1*n2);
            n4 = (d1 * d2);
            cout << n3 << "/" << n4 << " = ";
            calculo(n3, n4, mdc(n3, n4));
            continue;
        }

        if (oper == '/'){
            n3 = (n1*d2);
            n4 = (n2 * d1);
            cout << n3 << "/" << n4 << " = ";
            calculo(n3, n4, mdc(n3, n4));
            continue;
        }
    }
}
