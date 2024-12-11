#include <stdio.h>

int main(){
    unsigned long int x, y;
    
    while (scanf("%lu %lu", &x, &y) != EOF) printf("%lu\n", x^y);
}