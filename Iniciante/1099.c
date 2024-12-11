#include <stdio.h>


int main(){
    int test;
    scanf("%d", &test);
    
    while(test--){
        int x, y;
        scanf("%d %d", &x, &y);
        int sum = 0;

        if (x > y){
            int c = x;
            x = y;
            y = c;
        }

        for (int i = x + 1; i < y; i++){
            if (i % 2){
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
}
