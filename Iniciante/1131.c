#include <stdio.h>

int main(){

    int gremio = 0, internacional = 0;
    int gremio_wins = 0, inter_wins = 0, draws = 0, count_classics = 0;
    int stop;

    while (1) {
        scanf("%d %d", &internacional, &gremio);
        if (internacional > gremio){
            inter_wins++;
        } else if (internacional < gremio){
            gremio_wins++;
        } else {
            draws++;
        }
        count_classics++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &stop);
        if (stop == 2){
            printf("%d grenais\n", count_classics);
            printf("Inter:%d\n", inter_wins);
            printf("Gremio:%d\n", gremio_wins);
            printf("Empates:%d\n", draws);
            if (inter_wins > gremio_wins){
                printf("Inter venceu mais\n");
            } else if (inter_wins < gremio_wins) {
                printf("Gremio venceu mais\n");
            } else {
                printf("Nao houve vencedor\n");
            }
            break;
        }
        gremio = 0;
        internacional = 0;
    }
}