#include <stdio.h>

int main(){
    int lines;
    scanf("%d", &lines);

    int count = 1;
    for (int i = 0; count <= lines; count++){
        if (count % 2 != 0){
            printf("%d %d %d\n", i+1, (i+1)*(i+1), (i+1)*(i+1)*(i+1));
            i += 2;
        } else {
            printf("%d %d %d\n", i, (i)*(i), (i)*(i)*(i));
        }
    }
}
