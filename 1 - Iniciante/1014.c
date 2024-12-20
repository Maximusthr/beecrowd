#include <stdio.h>

int main(){

    int distancia;
    float combustivel, km_l;

    scanf("%d %f", &distancia, &combustivel);

    km_l = distancia/combustivel;

    printf("%.3lf km/l\n", km_l);


    return 0;
}