#include <stdio.h>
#define TRUE 1

int main(){
    while (TRUE){
        int x, y;
        scanf("%d %d", &x, &y);

        if (x > y){
            printf("Decrescente\n");
        } else if (x < y){
            printf("Crescente\n");
        } else {
            break;
        }
    }  
}