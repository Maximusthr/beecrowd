#include <stdio.h>


/*int main(){

    double cod_1 = 4, cod_2 = 4.5, cod_3 = 5, cod_4 = 2, cod_5 = 1.5;
    double preco;

    int cod_escolhido, quantidade;
    scanf("%d %d", &cod_escolhido, &quantidade);


    if (cod_escolhido == 1){
        preco = cod_1 * quantidade;
        printf("Total: R$ %.2lf\n", preco);
    } else if (cod_escolhido == 2){
        preco = cod_2 * quantidade;
        printf("Total: R$ %.2lf\n", preco);
    } else if (cod_escolhido == 3){
        preco = cod_3 * quantidade;
        printf("Total: R$ %.2lf\n", preco);
    } else if (cod_escolhido == 4){
        preco = cod_4 * quantidade;
        printf("Total: R$ %.2lf\n", preco);
    } else if (cod_escolhido == 5){
        preco = cod_5 * quantidade;
        printf("Total: R$ %.2lf\n", preco);
    }

    return 0;
}*/

int main(){

    double codigos[] = {4, 4.5, 5, 2, 1.5};

    int i, quantidade;
    scanf("%d %d", &i, &quantidade);

    double preco = codigos[i-1] * quantidade;

    printf("Total: R$ %.2lf\n", preco);


    return 0;
}
