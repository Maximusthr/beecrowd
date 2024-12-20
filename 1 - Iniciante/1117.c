#include <stdio.h>

int main(){
    int count = 0;
    double average, sum = 0;
    while (count != 2){
        double x;
        scanf("%lf", &x);
        if (x >= 0 && x <= 10){
            sum += x;
            count += 1;
        } else {
            printf("nota invalida\n");
        }
    }
    average = sum/count;
    printf("media = %.2lf\n", average);
}