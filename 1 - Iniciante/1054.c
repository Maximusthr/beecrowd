#include <stdio.h>



int main(){

    float numeros;
    int i;
    int c = 0;

    for (i = 0; i < 6; i++){
        scanf("%f", &numeros);
        if (numeros > 0){
            c += 1;
        }
    }

    printf("%d valores positivos\n", c);

}