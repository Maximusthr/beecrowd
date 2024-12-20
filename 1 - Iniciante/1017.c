#include <stdio.h>

int main(){

    int horas, vel_media;
    double d_percorrida, l_necessarios;
    int automovel_l = 12; //12 km/l

    scanf("%d %d", &horas, &vel_media);

    d_percorrida = vel_media * horas;

    l_necessarios = d_percorrida/automovel_l;


    printf("%.3lf\n", l_necessarios);

    return 0;
}