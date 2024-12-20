#include <stdio.h>

int main(){

    int dias;
    int idade[] = {365, 30, 1};
    int lista[3];

    scanf("%d", &dias);

    for (int i = 0; i < 3; i++){

        lista[i] = dias / idade[i];
        dias %= idade[i];
         
    }
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", lista[0], lista[1], lista[2]);
    return 0;
}
