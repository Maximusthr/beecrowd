#include <stdio.h>
#define TAM 100


int main(){
    int list[TAM];

    int bigger = 0;
    int aux = 0;
    int pos;

    for (int i = 0; i < TAM; i++){
        scanf("%d", &list[i]);
    }


    for (int i = 0; i < TAM; i++){
        aux = list[i];
        if (aux > bigger){
            bigger = aux;
            pos = i;
        }
    }
    printf("%d\n", bigger);
    printf("%d\n", pos+1);
}