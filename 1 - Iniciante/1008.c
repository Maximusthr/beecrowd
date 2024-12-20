#include <stdio.h>

int main(){

    int num_func, h_trab = 0;
    float h_valor, salario = 0;

    scanf("%d %d %f", &num_func, &h_trab, &h_valor);

    salario = (h_trab * h_valor);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num_func, salario);

    return 0;
}
