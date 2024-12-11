#include <stdio.h>
#include <math.h>

int main(){

    double valor;
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    double moedas[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    scanf("%lf", &valor);
    valor += 0.001; // precisa adicionar isso, pois a linguagem tem um bug.

    int valor_copia = valor;

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++){
        
        int notas = valor_copia / cedulas[i];
        valor_copia %= cedulas[i];
        //valor -= notas * cedulas[i]; // -> linha de danilo (exclui linha 12, 18, 24 e 25)
        printf("%d nota(s) de R$ %d.00\n", notas, cedulas[i]);

    } 

    int valor_copia2 = valor; // copia do valor para que fique 500
    valor = valor - valor_copia2 + valor_copia; // 500.70 - 500 + 1

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++){
        int qtd;
        if (moedas[i] == 0.01){
            qtd = round(valor/0.01); // bug quando a divisão é por 0.01
        } else {
            qtd = valor / moedas[i];
        }
        printf("%d moeda(s) de R$ %.2lf\n", qtd, moedas[i]);
        valor -= qtd * moedas[i];

        
    }



    return 0;
}
