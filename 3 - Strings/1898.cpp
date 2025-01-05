#include <bits/stdc++.h>

using namespace std;

int main(){
    string x, y;
    cin >> x >> y;

    string cpf, resto;
    bool ponto = false;
    int aux = 0, aux2 = 0;

    for (int i = 0; i < (int)x.size(); i++){
        if (x[i] >= '0' && x[i] <= '9' && aux < 11){
            cpf += x[i];
            aux++;
        }
        else if((x[i] >= '0' && x[i] <= '9') || x[i] == '.'){
            if (x[i] == '.'){
                ponto = true;
                resto += '.';
                continue;
            }
            if (!ponto) resto += x[i];
            else if (aux2 < 2){
                resto += x[i];
                aux2++;
                if (aux2 == 2) break;
            }
        }
    }

    string propina;
    ponto = false;
    int aux3 = 0;
    for (int i = 0; i < (int)y.size(); i++){
        if (y[i] >= '0' && y[i] <= '9' && !ponto){
            propina += y[i];
        }
        else if (y[i] == '.' || ponto){
            if (!ponto) {
                propina += y[i];
                ponto = true;
            }
            else if (y[i] >= '0' && y[i] <= '9'){
                if (aux3 < 2){
                    propina += y[i];
                    aux3++;
                    if (aux3 == 2) break;
                }
            }
        }
    }

    double num1 = 0, num2 = 0;
    double algarismos = 0, decimal = 1;

    bool parada = false;
    double final = 1;

    for (int i = (int)resto.size()-1; i >= 0; i--){
        if (resto[i] == '.'){
            parada = true;
            continue;
        }
        algarismos += (double)(resto[i]-'0')*decimal;
        decimal *= 10;
        if (!parada) final *= 10;
    }
    (!parada ? num1 = algarismos : num1 = algarismos/final);


    algarismos = 0, decimal = 1, final = 1;
    parada = false;
    for (int i = (int)propina.size()-1; i >= 0; i--){
        if (propina[i] == '.'){
            parada = true;
            continue;
        }
        algarismos += (double)(propina[i]-'0')*decimal;
        decimal *= 10;
        if (!parada) final *= 10;    
    }
    (!parada ? num2 = algarismos : num2 = algarismos/final);

    double soma = num1 + num2;

    cout << "cpf " << cpf << "\n";
    cout << fixed << setprecision(2) << soma << "\n";
}
