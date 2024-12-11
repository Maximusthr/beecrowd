#include <stdio.h>

int main(){

    double a, b, c;
    double pi = 3.14159;
    double triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &a, &b, &c); // A e B são BASES, C = altura
    
    triangulo = (a * c)/2; // a é base e c altura
    circulo = (pi * c * c); //c é o raio do circulo;
    trapezio = ((a + b) * c)/2; // (base maior + base menor) * altura / 2
    quadrado = (b * b); // b é o lado do quadrado
    retangulo = (a * b); // base vs altura, a e b são lados do retangulo

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);


    return 0;
}
