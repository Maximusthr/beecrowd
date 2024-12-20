#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);

    int aux = 0;

    for (int i = y+1; i < x; i++){
        if (i % 2 == 1 || i % 2 == -1){
            aux += i;
        }
   }

   int soma = aux;

   printf("%d\n", soma);
}