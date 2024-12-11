#include <stdio.h>

int main(){
    int cases, count_in = 0, count_out = 0;
    scanf("%d", &cases);

    int list[cases];

    for (int i = 0; i < cases; i++){
        scanf("%d", &list[i]);
        if (list[i] < 10){
            count_out++;
        } else if (list[i] > 20){
            count_out++;
        } else {
            count_in++;
        }
    }

    printf("%d in\n", count_in);
    printf("%d out\n", count_out);
}