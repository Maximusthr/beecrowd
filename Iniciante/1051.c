#include <stdio.h>



int main(){

    double salario;
    scanf("%lf", &salario);

    double taxa;

    if (salario > 4500){
        salario -= 2000;
        taxa = (1000 * 0.08);
        salario -= 1000;
        taxa += (1500 * 0.18);
        salario -= 1500;
        taxa += (salario * 0.28);
        printf("R$ %.2lf\n", taxa);
    } else if (salario > 3000 && salario <= 4500){
        salario -= 2000;
        taxa = (1000 * 0.08);
        salario -= 1000;
        taxa += (salario * 0.18);
        printf("R$ %.2lf\n", taxa);
    } else if (salario > 2000 && salario <= 3000){
        salario -= 2000;
        taxa = (salario * 0.08);
        printf("R$ %.2lf\n", taxa);
    } else {
        printf("Isento\n");
    }

}
