#include <stdio.h>


int main(){

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double copia_a = a;

    if (a < b){
        a = b;
        b = copia_a;
    }
    copia_a = a; // para o caso de a < c, o b mantém o seu valor.
    if (a < c){
        a = c;
        c = copia_a;
    } 

    if (a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
    } else if (a*a == (b*b + c*c)){
        printf("TRIANGULO RETANGULO\n");
        if (a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        } else if ((a == b && b != c) || (a == c && a != b) || (b == c && b != a)){ 
            printf("TRIANGULO ISOSCELES\n"); //2 lados iguais
        }
    } else if (a*a > (b*b + c*c)){
        printf("TRIANGULO OBTUSANGULO\n");
        if (a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        } else if ((a == b && b != c) || (a == c && a != b) || (b == c && b != a)) { 
            printf("TRIANGULO ISOSCELES\n"); //2 lados iguais
        }
    } else if (a*a < (b*b + c*c)){
        printf("TRIANGULO ACUTANGULO\n");
        if (a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        } else if ((a == b && b != c) || (a == c && a != b) || (b == c && b != a)) { 
            printf("TRIANGULO ISOSCELES\n"); //2 lados iguais
        }
    }

    

    return 0;
}