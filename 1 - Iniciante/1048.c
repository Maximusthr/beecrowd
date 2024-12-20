#include <stdio.h>


int main(){

    double salario;
    scanf("%lf", &salario);

    double salario_novo, reajuste;
    float percentual;

    if (salario <= 400){
        percentual = 15;
        reajuste = (salario * (percentual/100));
        salario_novo = reajuste + salario;        
    } else if (salario > 400 && salario <= 800){
        percentual = 12;
        reajuste = (salario * (percentual/100));
        salario_novo = reajuste + salario;
    } else if (salario > 800 && salario <= 1200){
        percentual = 10;
        reajuste = (salario * (percentual/100));
        salario_novo = reajuste + salario;
    } else if (salario > 1200 && salario <= 2000){
        percentual = 7;
        reajuste = (salario * (percentual/100));
        salario_novo = reajuste + salario;
    } else {
        percentual = 4;
        reajuste = (salario * (percentual/100));
        salario_novo = reajuste + salario;
    }


    printf("Novo salario: %.2lf\n", salario_novo);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0f %%\n", percentual);

}