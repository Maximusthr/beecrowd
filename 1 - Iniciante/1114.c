#include <stdio.h>

int main(){
    int senha = 2002;
    while (1){
        int x;
        scanf("%d", &x);
        if (x != senha) {
            printf("Senha Invalida\n");
        } else {
            printf("Acesso Permitido\n");
            break;
        }
    }
}