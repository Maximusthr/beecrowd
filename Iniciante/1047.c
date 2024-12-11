#include <stdio.h>


int main(){

    int hi, mi, hf, mf;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    // Resolvendo os minutos;
    int minutos;

    if (mi > mf){
        mf += 60;
        minutos = mf - mi;
        if (minutos >= 60){
            hf += 1; // Hora final recebe 1, pois excede 60 minutos.
            minutos -= 60;
        } else {
            hf -= 1; // Hora final decresce 1, pois na ordem da soma diminui 1 hora.
        }
    } else if (mi <= mf){
        minutos = mf-mi;
    }
    // Resolvendo as horas;
    int horas;
    
    if (hi > hf){
        hf += 24;
        horas = hf - hi;
    } else if (hi == hf && mi == mf){
        horas = 24;
    } else if (hi <= hf){ // Caso a condição de números e minutos falhem.
        horas = hf - hi;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
}
