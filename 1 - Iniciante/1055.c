#include <stdio.h>


int main(){
    int dia_i, hora_i, minuto_i, segundo_i;
    // dias
    scanf("Dia %d", &dia_i);
    // hora, minuto, segundo
    scanf("%d : %d : %d", &hora_i, &minuto_i, &segundo_i);
    getchar();
    int dia_f, hora_f, minuto_f, segundo_f;
    scanf("Dia %d", &dia_f);
    scanf("%d : %d : %d", &hora_f, &minuto_f, &segundo_f);
    

    int dia = dia_f - dia_i;
    int hora = hora_f - hora_i;
    int minuto = minuto_f - minuto_i;
    int segundo = segundo_f - segundo_i;

    if (segundo < 0){
        segundo += 60;
        minuto--;
    }
    if (minuto < 0){
        minuto += 60;
        hora--;
    }
    if (hora < 0){
        hora += 24;
        dia--;
    }
    
    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", minuto);
    printf("%d segundo(s)\n", segundo);

}