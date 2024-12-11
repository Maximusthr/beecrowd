#include <stdio.h>

int main(){
    int count_c = 0, count_s = 0, count_r = 0, total = 0;
    
    int num;
    scanf("%d", &num);
    int aux_int;
    char aux_char;

    for (int i = 0; i < num; i++){
        scanf("%d %c", &aux_int, &aux_char);
        total += aux_int;
        if (aux_char == 'R'){
            count_r += aux_int;
        } else if (aux_char == 'S'){
            count_s += aux_int;
        } else {
            count_c += aux_int;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", count_c);
    printf("Total de ratos: %d\n", count_r);
    printf("Total de sapos: %d\n", count_s);
    printf("Percentual de coelhos: %.2f %%\n", (float)count_c*100/total);
    printf("Percentual de ratos: %.2f %%\n", (float)count_r*100/total);
    printf("Percentual de sapos: %.2f %%\n", (float)count_s*100/total);
}