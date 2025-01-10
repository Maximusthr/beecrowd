#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    long long x, y; 

    while (cin >> x >> y && (x || y)){
        int zero = 0, um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, seis = 0, sete = 0, oito = 0, nove = 0;

        for (int i = x; i <= y; i++){
            int aux = i;
            while (aux > -1){
                if (aux % 10 == 0) zero++;
                else if (aux % 10 == 1) um++;
                else if (aux % 10 == 2) dois++;
                else if (aux % 10 == 3) tres++;
                else if (aux % 10 == 4) quatro++;
                else if (aux % 10 == 5) cinco++;
                else if (aux % 10 == 6) seis++;
                else if (aux % 10 == 7) sete++;
                else if (aux % 10 == 8) oito++;
                else if (aux % 10 == 9) nove++;

                aux /= 10;
                if (aux == 0) aux = -1;
            }
        }

        printf("%d %d %d %d %d %d %d %d %d %d\n", zero, um, dois, tres, quatro, cinco, seis, sete, oito, nove);
    }
}
