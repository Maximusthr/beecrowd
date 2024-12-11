#include <stdio.h>

int main(){
    int lines;
    scanf("%d", &lines);

    int count = 0;
    for (int i = 0; count < lines*2; count++){
        if (count % 2 == 0){
            i++;
            printf("%d %d %d\n", i, i*i, i*i*i);
        } else {
            printf("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);
        }
    }
}