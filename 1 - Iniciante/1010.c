#include <stdio.h>

int main(){

    int p1, num_p1;
    int p2, num_p2;

    float valor_p1;
    float valor_p2;
    float valor_total;

    scanf("%d %d %f", &p1, &num_p1, &valor_p1);
    scanf("%d %d %f", &p2, &num_p2, &valor_p2);
    
    valor_total = (num_p1 * valor_p1) + (num_p2 * valor_p2);

    printf("VALOR A PAGAR: R$ %.2f\n", valor_total);



    return 0;
}
