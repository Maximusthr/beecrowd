#include <stdio.h>
 
int main() {
 
    double raio, area = 0; //Números com pontos flutuantes com mais precisão
    double pi = 3.14159;

    scanf("%lf", &raio);

    area = pi * raio * raio;

    printf("A=%.4lf\n", area);


 
    return 0;
}