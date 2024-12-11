#include <stdio.h>

int main(){
    int lines;
    scanf("%d", &lines);
    int count = 0;
    for (int i = 0; count < lines; i++){
        printf("%d %d %d PUM\n", i+1, i+2, i+3);
        i += 3;
        count++;
    }
}