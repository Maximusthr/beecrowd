#include <stdio.h>

int main(){

    int segundos;
    int tempo[] = {3600, 60, 1};
    int lista[3];

    scanf("%d", &segundos);

    for (int i = 0; i < 3; i++){

       lista[i] = segundos / tempo[i];
       segundos %= tempo[i];

    }
    
    printf("%d:%d:%d\n", lista[0], lista[1], lista[2]);



    return 0;
}
