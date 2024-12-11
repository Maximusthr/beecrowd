#include <stdio.h>


int main(){
    int num;
    scanf("%d", &num);

    for (long int i = 1; i <= num; i++){
        if (i % 2 == 0){
            printf("%ld^2 = %ld\n", i, i*i);
        }
    }
}