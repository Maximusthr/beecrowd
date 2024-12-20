#include <stdio.h>
 
int main() {
 
    float nota1, nota2, nota3, media = 0;

    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    printf("MEDIA = %.1f\n", media);

 
    return 0;
}
