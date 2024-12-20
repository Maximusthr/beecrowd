#include <stdio.h>


int main(){

    int h1, h2;
    scanf("%d %d", &h1, &h2);

    int duracao;

    if (h1 > h2){
        h2 += 24;
        duracao = h2-h1;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    } else if (h1 == h2){
        duracao = 24;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    } else {
        duracao = h2-h1;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }


    return 0;
}