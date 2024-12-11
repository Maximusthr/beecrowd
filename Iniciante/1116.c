#include <stdio.h>

int main(){
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++){
        int x, y;
        scanf("%d %d", &x, &y);

        if (y == 0){
            printf("divisao impossivel\n");
        } else {
            double div = (double)x/(double)y;
            printf("%.1lf\n", div);
        }
    }
}