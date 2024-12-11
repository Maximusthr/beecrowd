#include <stdio.h>
#include <math.h>

int main(){
    int test;
    scanf("%d", &test);

    int x, y;
    int min;
    int d = y;
    if (x > y){
        min = y;
        x = y;
        x = min;
        int d = x;
    }

    for (int i = 0; i < test; i++){
        scanf("%d %d", &x, &y);
        while(x % d != 0 || y %d != 0) d--;
        printf("%d", d);
    }
}