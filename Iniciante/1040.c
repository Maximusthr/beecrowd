#include <stdio.h>

int main(){

    double n1, n2, n3, n4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    double media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1))/10;


    if (media >= 7){
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    } else if (media < 5){
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    } else if (media >=5 && media < 7){
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
        double n_exame;
        scanf("%lf", &n_exame);
        printf("Nota do exame: %.1lf\n", n_exame);
        media = (media + n_exame)/2;

        if (media >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", media);
        } else {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", media);
        }
    }
    return 0;
}
