#include <stdio.h>
#include <math.h>

int main(){
    double i = 0;
    double j = 1;
    const double c = 2;
    int count = 0;

    printf("I=%.0lf J=%.0lf\n", i, j);
    printf("I=%.0lf J=%.0lf\n", i, j+1);
    printf("I=%.0lf J=%.0lf\n", i, j+2);

    for (int k = 0; count != 3; k++){
        i += 0.2;
        j += 0.2;
        if (abs(i-1) < 1e-9 || abs(i-c) < 1e-9){
            printf("I=%.0lf J=%.0lf\n", i, j);
            printf("I=%.0lf J=%.0lf\n", i, j+1);
            printf("I=%.0lf J=%.0lf\n", i, j+2);
        } else {
            printf("I=%.1lf J=%.1lf\n", i, j);
            printf("I=%.1lf J=%.1lf\n", i, j+1);
            printf("I=%.1lf J=%.1lf\n", i, j+2);
        }
        if (abs(i-c) < 1e-9) count += 3;
    }
}

// resolvida compilando em c++
