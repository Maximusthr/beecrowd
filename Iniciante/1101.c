#include <stdio.h>

int main(){
    int z = 1;
    while (z > 0){
        int x, y;
        scanf("%d %d", &x, &y);
        if (y > x){
            int c = y;
            y = x;
            x = c;
        }
        if (y <= 0 || x <= 0){
            z = 0;
            break;
        };
        int sum = ((x + y) * (x - y + 1))/2; // formula aritmetica

        for (int i = y; i <= x; i++){
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    }
}
