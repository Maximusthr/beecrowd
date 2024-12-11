#include <stdio.h>


int main(){
    float num, soma = 0;
    int i;
    int count;

    for (i = 0; i < 6; i++){
        scanf("%f", &num);
        if (num > 0){
            soma += num;
            count++;
        }
    }

    float media = soma/count;

    printf("%d valores positivos\n", count);
    printf("%.1f\n", media);
}