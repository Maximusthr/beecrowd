#include <stdio.h>


int main(){
    int num, i = 0;
    int countpar = 0, countimp = 0, pos = 0, neg = 0;

    for (i = 0; i < 5; i++){
        scanf("%d", &num);
        if ((num % 2) == 0 ){
            countpar++;
        } else {
            countimp++;
        }

        if (num > 0){
            pos++;
        } else if (num < 0){
            neg++;
        }
    }
    
    printf("%d valor(es) par(es)\n", countpar);
    printf("%d valor(es) impar(es)\n", countimp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

}