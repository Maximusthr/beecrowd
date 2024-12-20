#include <stdio.h>
#include <stdlib.h> // abs

int main(){

    int num1, num2, num3;
    int maiorAB; //formula
    

    scanf("%d %d %d", &num1, &num2, &num3);

    maiorAB = (num1 + num2 + abs(num1 - num2))/2;

    if (maiorAB > num3){
        printf("%d eh o maior\n", maiorAB);
    } else {
        printf("%d eh o maior\n", num3);
    }


    return 0;
}