#include <stdio.h>
#include <string.h>


int main(){

    char tipo[128],  especie[128], alimento[128];
    scanf(" %s %s %s", tipo, especie, alimento);

    if (strcmp(tipo, "vertebrado") == 0){
        if (strcmp(especie, "ave") == 0){
            if (strcmp(alimento, "carnivoro") == 0){
                printf("aguia\n");
            } else {
                printf("pomba\n"); // onivoro
            }
        } else if (strcmp(especie, "mamifero") == 0){
            if (strcmp(alimento, "onivoro") == 0){
                printf("homem\n");
            } else {
                printf("vaca\n"); // herbivoro
            }
        }
    } else if (strcmp(tipo, "invertebrado") == 0){
        if (strcmp(especie, "inseto") == 0){
            if (strcmp(alimento, "hematofago") == 0){
                printf("pulga\n");
            } else {
                printf("lagarta\n"); // herbivoro
            }
        } else if (strcmp(especie, "anelideo") == 0){
            if (strcmp(alimento, "hematofago") == 0){
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n"); // onivoro
            }
        }
    }

}
