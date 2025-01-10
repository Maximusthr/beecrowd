#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    string x;
    
    int linha = 0;

    while(cin >> x){
        if (linha > 0) cout << "\n";

        bool bissexto = false;
        bool huluculu = false;
        bool bulukulu = false;

        // bissexto -> divisivel por 4 e não por 100 ou divisível por 400
        int num = 0;
        num += x[(int)x.size()-2]-'0';
        num *= 10;
        num += x[(int)x.size()-1]-'0';

        bool divisivel_cem = false;
        if (x[(int)x.size()-1] == '0' && x[(int)x.size()-2] == '0') divisivel_cem = true;

        // verificando 400
        int milhar = 0;
        milhar += x[(int)x.size()-4]-'0';
        milhar *= 10;
        milhar += x[(int)x.size()-3]-'0';
        milhar *= 10;
        milhar += x[(int)x.size()-2]-'0';
        milhar *= 10;
        milhar += x[(int)x.size()-1]-'0';

        bool valido = false;
        if (milhar % 400 == 0) valido = true;
        if ((num % 4 == 0 && !divisivel_cem) || valido) bissexto = true;

        //huluculu -> divisivel por 15:
        int soma = 0;
        bool divisivel_cinco = false;
        // verificando 3
        for (int i = 0; i < (int)x.size(); i++) soma += x[i]-'0';
        // verificando 5
        if ((x[(int)x.size()-1] == '5' || x[(int)x.size()-1] == '0')) divisivel_cinco = true;
        if (divisivel_cinco && soma % 3 == 0) huluculu = true;

        //bulukulu % 55
        int soma_par = 0;
        int soma_impar = 0;
        // verificando 11 -> soma todos os elementos pares e impares e tira o absoulto % 11 == 0 ou se for 0.
        for (int i = 0; i < (int)x.size(); i++){
            if (i % 2 == 0) soma_par += x[i]-'0';
            else soma_impar += x[i]-'0';
        }
        if (divisivel_cinco && (abs(soma_par - soma_impar) == 0 || abs(soma_par - soma_impar) % 11 == 0) && bissexto) bulukulu = true;

        if (bissexto) cout << "This is leap year.\n";
        if (huluculu) cout << "This is huluculu festival year.\n";
        if (bulukulu) cout << "This is bulukulu festival year.\n";
        if (!bissexto && !huluculu && !bulukulu) cout << "This is an ordinary year.\n";

        linha++;
    }
}
