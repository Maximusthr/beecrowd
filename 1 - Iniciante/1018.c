#include <stdio.h>

int main(){

    int nota;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};


    scanf("%d", &nota);
    printf("%d\n", nota);

    for (int i = 0; i < 7; i++){

        int notas = nota / cedulas[i];
        nota %= cedulas[i];
        printf("%d nota(s) de R$ %d,00\n", notas, cedulas[i]);

    }

    return 0;
}
