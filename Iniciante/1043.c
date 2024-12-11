#include <stdio.h>


int main(){

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a >= b+c || b >= a+c || c >= a+b){
        double area = ((a+b)*c)/2;
        printf("Area = %.1lf\n", area);
    } else {
        double perimetro = a + b + c;
        printf("Perimetro = %.1lf\n", perimetro);
    }

    return 0;
}

