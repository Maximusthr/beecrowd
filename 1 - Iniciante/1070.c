#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int count = 0, i = 0;

    while (count != 6){
        if ((num + i) % 2 == 1){
            count++;
            printf("%d\n", (num+i));
        }
        i++;
    }
}