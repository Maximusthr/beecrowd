#include <stdio.h>

int main(){

    int num1, num2, num3, num4, dif = 0;

    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    dif = (num1 * num2) - (num3 * num4);

    printf("DIFERENCA = %d\n", dif);


    return 0;
}