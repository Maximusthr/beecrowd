#include <stdio.h>

int main(){
    int cases, alcool = 0, gasolina = 0, diesel = 0;

    int qtd_clients;
    scanf("%d", &qtd_clients);

    while (1){
        scanf("%d", &cases);
        switch (cases){
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
        }
        if (cases == 4) break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);  
}