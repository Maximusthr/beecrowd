#include <stdio.h>


int main(){
    int num, count, i = 0;

    for (i = 0; i < 5; i++){
        scanf("%d", &num);
        if ((num % 2) == 0 ){
            count++;
        }
    }
    
    printf("%d valores pares\n", count);
}