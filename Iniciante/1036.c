#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double delta;
    delta = (b*b) - (4 * a * c);

    if (delta >= 0 && a > 0){
        if (delta == 0){

            double r1 = (-b)/2*a;
            double r2 = r1;
            printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);

        } else if (delta > 0){

            double r1 = ((-b) + sqrt(delta))/(2*a);
            double r2 = ((-b) - sqrt(delta))/(2*a);
            printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);

        }
    } else if (delta < 0 || a <= 0){
        printf("Impossivel calcular\n");
    }


    return 0;
}
