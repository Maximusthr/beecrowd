#include <stdio.h>

int main(){

    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3){
        if (num2 >= num3){
            printf("%d\n%d\n%d\n", num3, num2, num1); // crescente
            printf("\n%d\n%d\n%d\n", num1, num2, num3); // ordem que foram lidas
        } else if (num3 >= num2){
            printf("%d\n%d\n%d\n", num2, num3, num1); // crescente
            printf("\n%d\n%d\n%d\n", num1, num2, num3); // ordem que foram lidas
        }
    } else if (num2 >= num1 && num2 >= num3){
        if (num1 >= num3){
            printf("%d\n%d\n%d\n", num3, num1, num2); // crescente
            printf("\n%d\n%d\n%d\n", num1, num2, num3); // ordem que foram lidas
        } else if (num3 >= num1){
            printf("%d\n%d\n%d\n", num1, num3, num2); // crescente
            printf("\n%d\n%d\n%d\n", num1, num2, num3); // ordem que foram lidas
        }
    } else if (num3 >= num1 && num3 >= num1){
        if (num1 >= num2){
            printf("%d\n%d\n%d\n", num2, num1, num3); // crescente
            printf("\n%d\n%d\n%d\n", num1, num2, num3); // ordem que foram lidas
        } else if (num2 >= num1){
            printf("%d\n%d\n%d\n", num1, num2, num3); // crescente
            printf("\n%d\n%d\n%d\n", num1, num2, num3); // ordem que foram lidas
        }
    }

    return 0;
}
