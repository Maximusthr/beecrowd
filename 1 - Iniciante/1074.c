#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    int array[num];

    for (int i = 0; i < num; i++){
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < num; i++){
        if (array[i] % 2 == 0 && array[i] > 0){
            printf("EVEN POSITIVE\n");
        } else if (array[i] % 2 == 0 && array[i] < 0){
            printf("EVEN NEGATIVE\n");
        } else if (array[i] % 2 == 1 && array[i] > 0){
            printf("ODD POSITIVE\n");
        } else if (array[i] % 2 == -1 && array[i] < 0 ){
            printf("ODD NEGATIVE\n");
        } else {
            printf("NULL\n");
        }
    }
}