#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int c, sum = 0;
    
    if (y > x){
        c = y;
        y = x;
        x = c;
    }
    
    for (int i = y; i <= x; i++){
        if (i % 13 != 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
}