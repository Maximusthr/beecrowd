#include <stdio.h>


int main(){
    int i = 1;
    int j = 7;
    int count;

    for (int k = 0; count != 3; k++){
        printf("I=%d J=%d\n", i, j);
        printf("I=%d J=%d\n", i, j-1);
        printf("I=%d J=%d\n", i, j-2);
        if (i == 9) count +=3;
        j += 2;
        i += 2;
    }
}