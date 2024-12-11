#include <stdio.h>

int main(){

    int stop = 0, count = 0;
    double sum = 0, average = 0;
    do {
        double value;
        scanf("%lf", &value);

        if (value >= 0 && value <= 10){
            sum += value;
            count++;
            if (count == 2){
                average = sum/2;
                printf("media = %.2lf\n", average);
                while (1){
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &stop);
                    if (stop == 1 || stop == 2) break;
                }
                sum = 0;
                average = 0;
                count = 0;
            }
        } else {
            printf("nota invalida\n");
        }

    } while (stop != 2);
}